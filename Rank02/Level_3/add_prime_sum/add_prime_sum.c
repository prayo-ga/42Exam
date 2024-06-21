#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
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

int	is_prime(int nbr)
{
	int	div;

	div = 2;
	while (div <= nbr / 2)
	{
		if (nbr % div == 0)
			return (0);
		div++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char	digit;

	digit = 0;
	if (n >= 10)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	int	n;
	int	sum;

	if (ac != 2 || ft_atoi(av[1]) <= 0) 
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = atoi(av[1]);
	sum = 0;
	while (n > 1)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
