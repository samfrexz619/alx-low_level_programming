#include <unistd.h>
#include "main.h"

int _putchar(char alpha)
{
	return (write(1, &alpha, 1));
}
