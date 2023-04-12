#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_data - prints data
 * @ptr: magic.
 * Return: nothing.
 */
void print_data(char *ptr)
{
        char data = ptr[5];

        printf("  Data:                              2's complement");
        if (data == 1)
                printf(", little endian\n");

        if (data == 2)
                printf(", big endian\n");
}
