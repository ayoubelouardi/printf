#include <unistd.h>

/**
 * _puts - writes the string format to stdout
 * @format: the string to print
 *
 * Return: the number of bytes printed.
 * On error, -1 is returned, and errno is set appropriately
 */
int _puts(char *format)
{
	int size = 0;

	while (format[size] != '\0')
		size++;
	return (write(1, format, size));
}
