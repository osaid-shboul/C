#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t i;
  char *result;

  if (!s || !f)
    return (NULL);

  result = malloc(ft_strlen(s) + 1);
  if (!result)
    return (NULL);

  i = 0;
  while (s[i])
  {
    result[i] = f(i, s[i]);
    i++;
  }
  result[i] = '\0';
  return (result);
}