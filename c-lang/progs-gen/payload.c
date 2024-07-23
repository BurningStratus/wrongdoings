#include <stdio.h>
#include <string.h>

void func2();
void func1();

int main(int argc, char *argv[])
{
    puts("Start in main");
    printf("Addr of 2: %zp\n", &func2);
    func1();

}

void func2()
{
    puts("Payload.");
}

void func1()
{
    char foo[8];
    strncpy(foo, "12345678" "\x01\x02\x03\x04", 12);
    
    puts("Normal execution path.");
}
