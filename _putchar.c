#include <unistd.h>
#include "main.h"

/**
 * _putchar - writemain.h  README.md
root@4b9994fe0b79:/printf# vi _putchar.c





















#include <unistd.h>
#include "main.h"
 a character to stdout
 * @c: character to stdout
 *
 * Return: On success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
