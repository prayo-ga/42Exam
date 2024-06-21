//#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	temp = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// int main(void)
// {
// 	int array[] = {5, 3, 8, 6, 2, 7, 4, 1};
// 	unsigned int size = sizeof(array) / sizeof(array[0]);

// 	sort_int_tab(array, size);

// 	for (unsigned int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
