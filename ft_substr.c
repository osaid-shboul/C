#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{

  size_t len_s = ft_strlen(s);
  size_t len_o;
  char *output;
  size_t i;

  if (s == NULL)
    return (NULL);

  if (start >= len_s)
    len_o = 0;
  else
  {
    size_t alive = len_s - start;
    if (len < alive)
      len_o = len;
    else
      len_o = alive;
  }

  output = (char *)malloc(len_o + 1);

  if (output == NULL)
    return (NULL);

  i = 0;

  while (i < len_o)
  {
    output[i] = s[start + i];
    i++;
  }
  output[len_o] = '\0';

  return output;
}