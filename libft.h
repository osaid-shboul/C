#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *pt, int v, size_t l);
void ft_bzero(void *p, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

#endif