/* We are testing the Shellcode testenv.c */
/*  gcc -m32 -fno-stack-protector -z execstack testenv.c -o testenv */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char* ptr = getenv("EGG");
    printf("%p\n", ptr);
goto *ptr;
}
