#include "libmy.h"

void 	*malloc_failed(char *msg)
{
	my_putstr("Malloc failed in ");
	my_putstr(msg);
	my_putstr("\n");
	return (NULL);
}