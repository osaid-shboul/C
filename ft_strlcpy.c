#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t srclen = ft_strlen(src);
  size_t i = 0;

  if (size > 0)
  {
    while (src[i] != '\0' && i < size - 1)
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
  }

  return srclen;
}
