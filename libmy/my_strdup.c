#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);

void	*my_strdup(char *str)
{
  int	i;
  char	*memoire;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  memoire = malloc(sizeof(char) * (i + 1));
  if (memoire == 0)
    {
      return ("1");
    }
  my_strcpy(memoire, str);
  memoire[i + 1] = '\0';
  return (memoire);
}
