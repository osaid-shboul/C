#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
  size_t len = ft_strlen(s);
  char *dup = (char *)malloc(len + 1);
  if (!dup)
    return (NULL);

  ft_memcpy(dup, s, len + 1);
  return (dup);
}