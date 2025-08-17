#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *d = dst;
  const unsigned char *s = src;

  if (d == s)
    return dst;

  if (d < s)
  {
    size_t i = 0;
    while (i < len)
    {
      d[i] = s[i];
      i++;
    }
  }
  else
  {
    size_t i = len;
    while (i > 0)
    {
      i--;
      d[i] = s[i];
    }
  }
  return dst;
}
