#include "libft.h"
#include <stdio.h>

int main(void)
{
  // ======== ft_strlen ========
  char str1[] = "Hello, libft!";
  printf("ft_strlen: '%s' => %zu\n", str1, ft_strlen(str1));

  // ======== ft_strlcat ========
  char dest1[30] = "Hello, ";
  char src1[] = "World!";
  size_t ret1 = ft_strlcat(dest1, src1, sizeof(dest1));
  printf("ft_strlcat: dest='%s', return=%zu\n", dest1, ret1);

  // ======== ft_strlcpy ========
  char dest2[20];
  char src2[] = "Copy this!";
  size_t ret2 = ft_strlcpy(dest2, src2, sizeof(dest2));
  printf("ft_strlcpy: dest='%s', return=%zu\n", dest2, ret2);

  // ======== ft_is* ========
  char c = 'A';
  printf("ft_isalpha('%c')=%d\n", c, ft_isalpha(c));
  printf("ft_isdigit('%c')=%d\n", c, ft_isdigit(c));
  printf("ft_isalnum('%c')=%d\n", c, ft_isalnum(c));
  printf("ft_isascii('%c')=%d\n", c, ft_isascii(c));
  printf("ft_isprint('%c')=%d\n", c, ft_isprint(c));

  // ======== ft_memset ========
  char mem1[5] = {0};
  ft_memset(mem1, 'X', 5);
  printf("ft_memset: %c %c %c %c %c\n", mem1[0], mem1[1], mem1[2], mem1[3], mem1[4]);

  // ======== ft_bzero ========
  ft_bzero(mem1, 5);
  printf("ft_bzero: %d %d %d %d %d\n", mem1[0], mem1[1], mem1[2], mem1[3], mem1[4]);

  // ======== ft_memcpy ========
  char src3[] = "ABCDE";
  char dst3[6];
  ft_memcpy(dst3, src3, 6);
  printf("ft_memcpy: %s\n", dst3);

  // ======== ft_memmove ========
  char str2[20] = "123456789";
  ft_memmove(str2 + 2, str2, 5);
  printf("ft_memmove: %s\n", str2);

  // ======== ft_toupper & ft_tolower ========
  char low = 'a';
  char up = 'Z';
  printf("ft_toupper('%c')=%c\n", low, ft_toupper(low));
  printf("ft_tolower('%c')=%c\n", up, ft_tolower(up));

  // ======== ft_strchr & ft_strrchr ========
  char str3[] = "hello world";
  printf("ft_strchr('l')=%s\n", ft_strchr(str3, 'l'));
  printf("ft_strrchr('l')=%s\n", ft_strrchr(str3, 'l'));

  // ======== ft_strncmp ========
  char s1[] = "abcde";
  char s2[] = "abxyz";
  printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 2));

  // ======== ft_memchr ========
  char str4[] = "abcde";
  printf("ft_memchr('c')=%s\n", (char *)ft_memchr(str4, 'c', 5));

  // ======== ft_memcmp ========
  printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));

  // ======== ft_strnstr ========
  char haystack[] = "Hello libft";
  char needle[] = "libft";
  printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, 12));

  // ======== ft_atoi ========
  printf("ft_atoi: %d\n", ft_atoi("  -1234abc"));

  return 0;
}
