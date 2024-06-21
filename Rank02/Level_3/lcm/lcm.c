//#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;

	i = 0;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned int	a;
	unsigned int	b;

	a = 1;
	b = 3;
	printf("Resultado: %d\n", lcm(a, b));
}
*/
