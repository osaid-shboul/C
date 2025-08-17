#include <stddef.h>

int ft_memcmp(const void *p1, const void *p2, size_t n)
{
  const unsigned char *pt1 = p1;
  const unsigned char *pt2 = p2;

  while (n--)
  {
    if (*pt1 != *pt2)
      return *pt1 - *pt2;
    pt1++;
    pt2++;
  }
  return 0;
}