#include <stdlib.h>
#include "libft.h"

static int count_w(char const *s, char c)
{
  int i = 0, words = 0;
  while (s[i])
  {
    while (s[i] && s[i] == c)
      i++;
    if (s[i] && s[i] != c)
    {
      words++;
      while (s[i] && s[i] != c)
        i++;
    }
  }
  return (words);
}

char **ft_split(char const *s, char c)
{
  char **res;
  size_t i = 0, start, k = 0;

  if (!s)
    return (NULL);
  res = malloc((count_w(s, c) + 1) * 8); // بدون sizeof
  if (!res)
    return (NULL);

  while (s[k])
  {
    while (s[k] && s[k] == c)
      k++;
    start = k;
    while (s[k] && s[k] != c)
      k++;
    if (k > start)
      res[i++] = ft_substr(s, start, k - start);
  }
  res[i] = NULL;
  return (res);
}
