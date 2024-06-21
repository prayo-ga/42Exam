//#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	while (n)
	{
		if (n % 2 == 0 || n == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}

// int	main(void)
// {
// 	unsigned int	numbers[] = {0, 1, 2, 3, 4, 8, 15, 16, 31, 32};
// 	int				num_elements;

// 	num_elements = sizeof(numbers) / sizeof(numbers[0]);
// 	for (int i = 0; i < num_elements; i++)
// 	{
// 		printf("%u is %s a power of 2\n", numbers[i],
// 			is_power_of_2(numbers[i]) ? "" : "not");
// 	}
// 	return (0);
// }
