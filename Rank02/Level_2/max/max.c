//#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int				numbers[] = {5, 10, 2, 15, -1};
// 	unsigned int	num_elements;
// 	int				largest;

// 	num_elements = sizeof(numbers) / sizeof(numbers[0]);
// 	largest = max(numbers, num_elements);
// 	printf("The largest element in the array is: %d\n", largest);
// 	return (0);
// }
