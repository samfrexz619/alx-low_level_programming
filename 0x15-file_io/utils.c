#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_addr - prints address
 * @ptr: ptr
 * Return: nothing
 */
void print_addr(char *ptr)
{
	int index;
	int start;
	char sys;

	printf("  Entry point address:               0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		start = 26;
		printf("80");
		for (index = start; index >= 22; index--)
		{
			if (ptr[index] > 0)
				printf("%x", ptr[index]);
			else if (ptr[index] < 0)
				printf("%x", 256 + ptr[index]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		start = 26;
		for (index = start; index > 23; index--)
		{
			if (ptr[index] >= 0)
				printf("%02x", ptr[index]);

			else if (ptr[index] < 0)
				printf("%02x", 256 + ptr[index]);

		}
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @ptr: magic.
 * Return: nothing.
 */
void print_type(char *ptr)
{
	char tp = ptr[16];

	if (ptr[5] == 1)
		tp = ptr[16];
	else
		tp = ptr[17];

	printf("  Type:                              ");
	if (tp == 0)
		printf("NONE (No file type)\n");
	else if (tp == 1)
		printf("REL (Relocatable file)\n");
	else if (tp == 2)
		printf("EXEC (Executable file)\n");
	else if (tp == 3)
		printf("DYN (Shared object file)\n");
	else if (tp == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", tp);
}
/**
 * print_osabi - prints osabi
 * @ptr: magic.
 * Return: nothing.
 */
void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
	printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}

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
/**
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */
void print_magic(char *ptr)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);

	printf("\n");

}
