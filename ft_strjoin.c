#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *str1, char const *str2)
{
  size_t len_s1;
  size_t len_s2;
  char *output;

  if (str1 == NULL || str2 == NULL)
    return (NULL);

  len_s1 = ft_strlen(str1);
  len_s2 = ft_strlen(str2);

  output = (char *)malloc(len_s1 + len_s2 + 1);

  if (output == NULL)
    return (NULL);

  ft_memcpy(output, str1, len_s1);
  ft_memcpy(output + len_s1, str2, len_s2);
  output[len_s1 + len_s2] = '\0';
  return output;
}
