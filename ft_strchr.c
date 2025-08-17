char *ft_strchr(const char *src, int c)
{
  while (*src)
  {
    if (*src == (char)c)
      return (char *)src;
    src++;
  }
  if (c == '\0')
    return (char *)src;
  return '\0';
}