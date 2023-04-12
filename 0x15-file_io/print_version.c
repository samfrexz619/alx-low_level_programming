#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_version - prints version
 * @ptr: magic.
 * Return: nothing.
 */
void print_version(char *ptr)
{
        int version = ptr[6];

        printf("  Version:                           %d", version);

        if (version == EV_CURRENT)
                printf(" (current)");

        printf("\n");
}
