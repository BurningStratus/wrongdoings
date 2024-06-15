#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#include <netinet/in.h>

#include <sys/socket.h>
#include <sys/sendfile.h>

void connect_cl()
{
    

}

int main()
{
    // define socket
    int s = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in addr = {
        AF_INET,
        0x901f,
        0,
    };
    // bind socket & listen
    bind(s, (struct sockaddr*)&addr, sizeof(addr));
    listen(s, 10);
    
    // define client
    int client_fd = accept(s, 0, 0);
    
    // request looks like: GET /file.html ..<PAYLOAD>..
    char buffer[256] = { 0 };
    recv(client_fd, buffer, 256, 0);
    // get payload from string :: xxxx.xxxx.xxxx.xxxx:port/file.html
    char* f = buffer + 5;
    *strchr(f, ' ') = 0;
    
    // open new descriptor for *.html
    int opened_fd = open(f, O_RDONLY);
    
    // send the file descriptor from server to client
    sendfile(client_fd, opened_fd, 0, 256);
    
    // close the descriptors
    close(opened_fd);
    close(client_fd);
    // close the socket
    close(s);
    return 0;
}
