#include <stdlib.h>

int	isalphanumeric(char c)
{
  return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')));
}

char	**my_str_to_wordtab(char *str)
{
  int	x;
  int	y;
  int	i;
  char	**tab;
  
  x = 0;
  i = 0;
  tab = malloc(sizeof(char *) * 5000);
  while (str[i])
    {
      if (isalphanumeric(str[i]))
	{
	  tab[x] = malloc(sizeof(char) * 5000);
	  y = 0;
	  while (isalphanumeric(str[i]))
	    {
	      tab[x][y] = str[i];
	      i++;
	      y++;
	    }
	  x++;
	}
      while (str[i] && !isalphanumeric(str[i]))
	i++;
    }
  return (tab);
}
