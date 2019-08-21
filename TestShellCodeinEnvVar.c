##We are testing the Shellcode testenv.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char* ptr = getenv("EGG");
    printf("%p\n", ptr);
goto *ptr;
}
