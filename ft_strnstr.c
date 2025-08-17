#include <stddef.h>

char *ft_strnstr(const char *src, const char *sea, size_t n)
{
  size_t i = 0;
  size_t j;

  if (!*sea)
    return (char *)src;

  while (i < n && src[i])
  {
    j = 0;
    while (i + j < n && src[i + j] && src[i + j] == sea[j])
      j++;
    if (!sea[j])
      return (char *)(src + i);

    i++;
  }
  return '\0';
}