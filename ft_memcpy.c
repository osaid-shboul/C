#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *d;
  const unsigned char *s;

  d = dest;
  s = src;

  while (n > 0)
  {
    *d = *s;
    d++;
    s++;
    n--;
  }
  return dest;
}
