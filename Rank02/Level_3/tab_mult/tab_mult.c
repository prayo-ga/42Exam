#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

void	ft_putnbr(int nbr)
{
	char	c;

	c = 0;
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = ft_atoi(av[1]);
	if (ac == 2)
	{
		while (i <= 9 && nbr)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
