#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

#include <arpa/inet.h>
#include <netinet/in.h>

#include <sys/socket.h>
#include <sys/sendfile.h>

// TODO: create a way to change port number from argc
// TODO: eternally spinning endpoint


//int main( int argc, char *argv[] )
int main()
{   
    const char LOCAL_ADDR[] = "127.0.0.1"; 
    int32_t l_addr = inet_addr( LOCAL_ADDR );

    // define socket
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    //addr.sin_addr = inet_addr(LOCAL_ADDR);
    addr.sin_addr.s_addr = l_addr;
    addr.sin_port = htons(8080);
    
    int connection( int socket );
    int s = socket( AF_INET, SOCK_STREAM, 0 );  
    
    // int sock = getsockname( s, (struct sockaddr*)&addr, restrict sizeof(addr) );
    //printf("Socket name: %d\n", sock);
    
    bind(s, (struct sockaddr*)&addr, sizeof(addr));
    printf("Listening ...");
    listen(s, 10);

    int x = connection( s ); 
    // close the socket
    close(s);
    return 0;
    
}


int connection( int socket )
{  
    // define client
    printf("Defining the client");
    int client_fd = accept(socket, 0, 0);
    printf("Connection accepted.");    
    // request looks like: GET /file.html ..<PAYLOAD>..
    char buffer[256] = { 0 };
    recv(client_fd, buffer, 256, 0);
    // get payload from string :: xxxx.xxxx.xxxx.xxxx:port/file.html
    char* f = buffer + 5;
    *strchr(f, ' ') = 0;
    
    // TODO: make logger to shell/logfile    
    /*if ()
    {
    }
    */
    
    // open new descriptor for *.html
    int opened_fd = open(f, O_RDONLY);
        
    // send the file descriptor from server to client and response header
    char *r_header = 
    "HTTP/1.0 200 OK\n"
    "Date: Thu, 19 APR 2009 12:27:04 GMT\n"
    "Server: http-server\n";
    send( socket, r_header, strlen(r_header), MSG_NOSIGNAL ); 

    
    //<<<  MOVE THESE TO OWN FUNCTION AND RUN IN BACKGROUND
    //recv(client_fd, buffer, 256, 0);
    //printf("%s", buffer);
    sendfile( client_fd, opened_fd, 0, 256 );    
    // close the descriptors
    close(opened_fd);
    close(client_fd);
    //<<< MOVE THESE TO OWN FUNCTION


    // log vvvv
    printf("Connection successful.\n");
    return 0;
}
