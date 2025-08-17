#include <stddef.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t s)
{
  size_t dstl = ft_strlen(dst);
  size_t srcl = ft_strlen(src);
  size_t i = 0;

  if (dstl >= s)
    return s + srcl;

  while (src[i] != '\0' && (dstl + i) < (s - 1))
  {
    dst[dstl + i] = src[i];
    i++;
  }

  dst[dstl + i] = '\0';
  return dstl + srcl;
}
