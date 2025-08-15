#include "libft.h"

void ft_bzero(void *ptr, size_t n)
{
  unsigned char *p = ptr;

  while (n > 0)
  {
    *p = 0;
    p++;
    n--;
  }
}
