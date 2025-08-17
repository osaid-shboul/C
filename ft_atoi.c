
int ft_atoi(const char *str)
{
  int count = 0;
  int sign = 1;
  int result = 0;

  while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
    count++;

  if (str[count] == '-' || str[count] == '+')
  {
    if (str[count] == '-')
      sign = -1;

    count++;
  }

  while (str[count] >= '0' && str[count] <= '9')
  {
    result = result * 10 + (str[count] - '0');
    count++;
  }
  return result * sign;
}