#include <stdlib.h>

static int numl(int n)
{
  int len = (n <= 0);

  while (n)
  {
    len++;
    n /= 10;
  }
  return (len);
}
char *ft_itoa(int n)
{
  long num = n;
  int len = numl(n);
  char *str = malloc(len + 1);

  if (!str)
    return (NULL);
  str[len] = '\0';

  if (num < 0)
  {
    str[0] = '-';
    num *= -1;
  }
  while (--len >= 0 && str[len] != '-')
  {
    str[len] = (num % 10) + '0';
    num /= 10;
  }
  return (str);
}