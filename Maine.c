#include "libft.h"
#include <stdio.h>

int main()
{
  int x = 4;
  char y = 'f';
  char h = '1';
  char name[12] = "osaid shboul";

  printf("%d\n", ft_isalpha(y));
  printf("%d\n", ft_isdigit(x));
  printf("%d\n", ft_isalnum(x));

  ft_memset(name, 's', 5);
  printf("%s\n", name);

  int arr[5] = {1, 2, 3, 4, 5};

  ft_bzero(arr, sizeof(arr));

  int i = 0;
  while (i < 5)
  {
    printf("%d ", arr[i]);
    i++;
  }

  char src[] = "Hello";
  char dest[10];

  ft_memcpy(dest, src, 6);

  printf("%s\n", dest);
}