#include <stddef.h>

void *ft_memset(void *ptr, int value, size_t len)
{
  unsigned char *p = (unsigned char *)ptr;
  size_t i = 0;

  while (i < len)
  {
    p[i] = (unsigned char)value;
    i++;
  }
  return ptr;
}
