#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppcase.
 * @str: The string to be changed.
 * Return: A pointer to the change string.
 *
 */

char *strung_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
