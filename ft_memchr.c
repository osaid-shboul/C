#include <stddef.h>

void *ft_memchr(const void *ptr, int value, size_t n)
{
  size_t i = 0;
  const unsigned char *p = (const unsigned char *)ptr;

  while (i < n)
  {
    if (p[i] == (unsigned char)value)
      return (void *)(p + i);
    i++;
  }
  return NULL;
}
