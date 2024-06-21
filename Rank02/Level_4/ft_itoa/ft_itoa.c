#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*ptr;

	n = nbr;
	len = 0;
	if (nbr == -2147483647)
		return ("-2147483647\n");
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (nbr == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		ptr[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (ptr);
}

// int	main(int ac, char **av)
// {
// 	char *result;

// 	if (ac != 2)
// 	{
// 		return (1);
// 	}

// 	int number = atoi(av[1]);
// 	result = ft_itoa(number);
// 	if (result != NULL)
// 	{
// 		printf("El resultado de ft_itoa(%d) es: %s\n", number, result);
// 		free(result);  // Liberar la memoria asignada por ft_itoa
// 	}
// 	else
// 	{
// 		printf("Error al convertir el número\n");
// 	}

// 	return (0);
// }
