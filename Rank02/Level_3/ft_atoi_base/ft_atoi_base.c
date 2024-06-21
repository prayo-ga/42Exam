//#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int	digit(char c, int digit_base)
{
	int	max;

	max = 0;
	if (digit_base <= 10)
		max = digit_base + '0';
	else
		max = digit_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while ((i = digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (i * sign);
		str++;
	}
	return (res);
}

// int	main(void)
// {
// 	char	*str = "123456789abcdef";
// 	int		base;
// 	int		result;

// 	base = 10;
// 	result = ft_atoi_base(str, base);
// 	if (result >= 0)
// 		printf("String: %s, Base: %d, Result: %d\n", str, base, result);
// 	else
// 	{
// 		printf("Error: Invalid input\n");
// 	}
// 	return (0);
// }
