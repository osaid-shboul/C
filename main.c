#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main(void)
{
  // 1. ft_strlen
  char *str1 = "Hello";
  printf("ft_strlen: '%s' => %zu\n", str1, ft_strlen(str1));

  // 2. ft_strlcpy
  char buf[20];
  ft_strlcpy(buf, "World", 20);
  printf("ft_strlcpy: %s\n", buf);

  // 3. ft_strlcat
  char buf2[20] = "Hello ";
  ft_strlcat(buf2, "World", 20);
  printf("ft_strlcat: %s\n", buf2);

  // 4. ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
  char c = 'A';
  printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
  printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
  printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
  printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
  printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));

  // 5. ft_memset, ft_bzero, ft_memcpy, ft_memmove
  char arr[10];
  ft_memset(arr, 'A', 10);
  printf("ft_memset: %c %c %c ...\n", arr[0], arr[1], arr[2]);

  ft_bzero(arr, 10);
  printf("ft_bzero: %d %d %d ...\n", arr[0], arr[1], arr[2]);

  char src[] = "12345";
  char dest[6];
  ft_memcpy(dest, src, 6);
  printf("ft_memcpy: %s\n", dest);

  char overlap[] = "ABCDE";
  ft_memmove(overlap + 2, overlap, 3);
  printf("ft_memmove: %s\n", overlap);

  // 6. ft_toupper, ft_tolower
  printf("ft_toupper('a') = %c\n", ft_toupper('a'));
  printf("ft_tolower('A') = %c\n", ft_tolower('A'));

  // 7. ft_strchr, ft_strrchr
  char *s = "Hello World";
  printf("ft_strchr('o') = %s\n", ft_strchr(s, 'o'));
  printf("ft_strrchr('o') = %s\n", ft_strrchr(s, 'o'));

  // 8. ft_strncmp, ft_memchr, ft_memcmp
  printf("ft_strncmp('abc','abd',3) = %d\n", ft_strncmp("abc", "abd", 3));
  printf("ft_memchr('abc','b',3) = %s\n", (char *)ft_memchr("abc", 'b', 3));
  printf("ft_memcmp('abc','abd',3) = %d\n", ft_memcmp("abc", "abd", 3));

  // 9. ft_substr
  char *sub = ft_substr("Hello World", 6, 5);
  printf("ft_substr: %s\n", sub);
  free(sub);

  // 10. ft_strjoin
  char *join = ft_strjoin("Hello", " World");
  printf("ft_strjoin: %s\n", join);
  free(join);

  return 0;
}
