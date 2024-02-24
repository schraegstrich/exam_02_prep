
int ft_atoi(const char *str)
{
	int res;
	int sign;
	res = 0;
	sign = 1;

	if (*str == '-2147483648')
		return(-2147483648);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	if (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}