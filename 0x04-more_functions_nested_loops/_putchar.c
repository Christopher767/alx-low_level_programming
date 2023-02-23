#include <unistd.h>

/**
 * _putchar - write the character x to stdout
 * @c: The charcter to print
 * Return 1 if true, 0 if false
 * on error, -1 return.
 */
int _putchar(char x)
{
return (write(1, &x, 1));
}
