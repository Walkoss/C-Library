char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str1[c] != '\0')
    {
      c++;
    }
  while (str2[i] != '\0')
    {
      str1[c] = str2[i];
      c++;
      i++;
    }
  return (str1);
}
