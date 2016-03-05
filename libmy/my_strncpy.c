char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	c;
  
  c = 0;
  i = 0;
  while (*(src + c) != '\0')
    {
      c = c + 1;
    }
  while ((*(src + i) != '\0') && (i < n))
    {
      if (c < n)
	{
	  *(dest + c) = 0;
	  c++;
	}
      else
	{
	  *(dest + i) = *(src + i);
	  i++;
	}
    }
  return (dest);
}
