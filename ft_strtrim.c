#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{

  size_t start;
  size_t end;
  size_t len;

  if (!s1 || !set)
    return (NULL);

  start = 0;
  while (s1[start] && ft_strchr(set, s1[start]))
    start++;
  if (s1[start] == '\0')
    return (ft_strdup(""));

  end = ft_strlen(s1) - 1;
  while (end > start && ft_strchr(set, s1[end]))
    end--;

  len = end - start + 1;
  return (ft_substr(s1, start, len));
}

int main(void)
{
  char *s1;
  char *set;
  char *result;

  // مثال 1: مسافات
  s1 = "   hello world   ";
  set = " ";
  result = ft_strtrim(s1, set);
  printf("Original: '%s'\nTrimmed : '%s'\n\n", s1, result);
  free(result);

  // مثال 2: أحرف محددة
  s1 = "xxxHello 42xxx";
  set = "x";
  result = ft_strtrim(s1, set);
  printf("Original: '%s'\nTrimmed : '%s'\n\n", s1, result);
  free(result);

  // مثال 3: أكثر من نوع محارف
  s1 = "--**Hello**--";
  set = "-*";
  result = ft_strtrim(s1, set);
  printf("Original: '%s'\nTrimmed : '%s'\n\n", s1, result);
  free(result);

  // مثال 4: string كامل ينمسح
  s1 = "aaaaaa";
  set = "a";
  result = ft_strtrim(s1, set);
  printf("Original: '%s'\nTrimmed : '%s'\n\n", s1, result);
  free(result);

  return 0;
}
