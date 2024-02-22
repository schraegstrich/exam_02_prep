#include <stddef.h>
// #include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int j;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		j = 0;
		while (((char *)reject)[j] != '\0')
		{
			if (((char *)s)[i] == ((char *)reject)[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}

// int main ()
// {
// 	const char *s;
// 	const char *reject;

// 	s = "tsNew";
// 	reject = "strings";

// 	printf("%lu", ft_strcspn(s, reject));
// 	return (0);
// }