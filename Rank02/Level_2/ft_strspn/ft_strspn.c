#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*accept;

// 	s = "ESTOT AQUI";
// 	accept = "VETE";

// 	printf("RESULTADO MIO: %zu", ft_strspn(s, accept));
// 	printf("RESULTADO: %lu", strspn(s, accept));
// }
