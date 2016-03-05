int	cmp(char *s1, char *s2)
{
  int	i;
  
  i = 0;
  while (s1[i])
    {
      if (s1[i] != s2[i])
	{
	  return (s1[i] - s2[i]);
	}
      i++;
    }
  return (0);
}
char	*my_strstr(char *str, char *to_find)
{
  while (*str)
    {
      if (*str == to_find[0] && (cmp(to_find, str) == 0))
	{
	  return (str);
	}
      str++;
    }
  return ("null");
}
