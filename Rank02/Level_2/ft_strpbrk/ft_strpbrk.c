#include <string.h>
// #include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "las";
// 	s2 = "la";

// 	printf("S1: %s\n", s1);
// 	printf("S2: %s\n", s2);

// 	printf("FINAL MIA: %s\n", ft_strpbrk(s1, s2));
// 	printf("FINAL ORIGINAL: %s\n", strpbrk(s1, s2));
// }
