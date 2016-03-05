int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((*(s1 + i) == *(s2 + i)) && (i < n))
    {
      i++;
    }
  if (*(s1 + i) == *(s2 + i))
    {
      return (0);
    }
  else if (*(s1 + i) < *(s2 + i))
    {
      return (-1);
    }
  else
    {
      return (1);
    }
}
