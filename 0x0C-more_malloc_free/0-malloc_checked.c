#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * if malloc fails he malloc_checked function should cause normal process
 * termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
void *pt;
pt = malloc(b);
if (pt == NULL)
exit(98);
return (pt);
}
