#include <stdlib.h>

//#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*ptr;
	int	len;
	int	i;

	i = 0;
	len = abs(start - end) + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (0);
	while (i < len)
	{
		if (start < end)
		{
			ptr[i] = end;
			end--;
		}
		else
		{
			ptr[i] = end;
			end++;
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
	array = ft_rrange(start, end);
	for (int    i = 0; i < start - end +  1; i++)
	{
		printf("RESULTADO: %d ", array[i]);
	}
	return (0);
}


 */