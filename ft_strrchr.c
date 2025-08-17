char *ft_strrchr(const char *src, int c)
{
  const char *last = '\0';

  while (*src)
  {
    if (*src == (char)c)
      last = src;

    src++;
  }
  if (c == '\0')
    return (char *)src;

  return (char *)last;
}