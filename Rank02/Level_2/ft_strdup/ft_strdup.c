#include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (ptr != NULL)
	{
		while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	*src;

// 	src = "Adios";

// 	printf ("SRC: %s\n", src);

// 	printf("FINAL MIA: %p\n", ft_strdup(src));
// 	printf("FINAL ORIGINAL: %p\n", strdup(src));
// }
