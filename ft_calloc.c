#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void *ft_calloc(size_t e, size_t size)
{
  size_t total;
  void *ptr;

  if (e && size && e > SIZE_MAX / size)
    return (NULL);

  total = e * size;
  if (total == 0)
    total = 1;

  ptr = malloc(total);
  if (!ptr)
    return (NULL);

  ft_bzero(ptr, total);
  return (ptr);
}
