//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' & *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "987654";
// 	printf("String: %s", str);
// 	int	res;
// 	res = ft_atoi(str);
// 	printf("Atoi:%i", res);
// 	return (0);
// }
