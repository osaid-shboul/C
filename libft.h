#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

size_t ft_strlen(const char *str);
size_t ft_strlcat(char *dst, const char *src, size_t s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *pt, int v, size_t l);
void ft_bzero(void *p, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *src, int c);
char *ft_strrchr(const char *src, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *ptr, int value, size_t n);
int ft_memcmp(const void *p1, const void *p2, size_t n);
char *ft_strnstr(const char *src, const char *sea, size_t n);
int ft_atoi(const char *str);
void *ft_calloc(size_t e, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *str1, char const *str2);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);

#endif