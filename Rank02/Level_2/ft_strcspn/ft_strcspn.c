// #include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*reject;

// 	s = "hola";
// 	reject = "adios";

// 	printf("s: %s\n", s);
// 	printf("reject: %s\n", reject);

// 	printf("Final: %lu\n", ft_strcspn(s, reject));
// 	printf("Final: %lu\n", strcspn(s, reject));
// }
