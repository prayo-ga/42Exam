#include <unistd.h>

int	ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	char	printed[128] = {0};
	int		i;

	i = 0;
	while (*str1)
	{
		if (ft_strchr(str2, *str1) && !ft_strchr(printed, *str1))
		{
			write (1, str1, 1);
			printed[i] = *str1;
			i++;
		}
		str1++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
