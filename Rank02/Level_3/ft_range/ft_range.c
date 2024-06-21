#include <stdlib.h>

//#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*ptr;
	int	i;
	int	len;

	len = abs(end - start) + 1;
	ptr = malloc(sizeof(int) * len);
	i = 0;
	if (ptr == NULL)
		return (0);
	while (i < len)
	{
		if (start < end)
		{
			ptr[i] = start;
			start++;
		}
		else
		{
			ptr[i] = start;
			start--;
		}
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	start;
	int	end;
	int	*array;

	start = 0;
	end = -3;
	array = ft_range(start, end);
	for (int    i = 0; i < start - end +  1; i++)
	{
		printf("RESULTADO: %d ", array[i]);
	}
	return (0);
}

 */