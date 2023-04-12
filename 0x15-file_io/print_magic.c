#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: nothing.
 */
void print_magic(char *ptr)
{
        int bytes;

        printf("  Magic:  ");

        for (bytes = 0; bytes < 16; bytes++)
                printf(" %02x", ptr[bytes]);

        printf("\n");

}
