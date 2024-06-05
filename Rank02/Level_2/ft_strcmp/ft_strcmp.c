// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1 == s2)
		i++;
	return (s1 - s2);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "HOLA";
// 	s2 = "HOLA";

// 	printf("Primera string:%s", s1);
// 	printf("Segunda string:%s", s2);

// 	printf("Resultado: %i", ft_strcmp(s1, s2));
// }
