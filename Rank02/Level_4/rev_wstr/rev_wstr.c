#include <unistd.h>

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	i;
	int	flag;

	start = 0;
	end = 0;
	i = 0;
	flag = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
