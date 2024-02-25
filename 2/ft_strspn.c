#include <stddef.h>
#include <stdio.h>
#include <string.h>

// size_t	ft_strspn(const char *s, const char *accept)
// {
// 	int i;
// 	i = 0;

// 	while (s[i] != '\0' && accept[i] != '\0' && s[i] == accept[i])
// 		i++;
// 	return(i);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

int main ()
{
	const char *s;
	const char *reject;

	s = "erej";
	reject = "reject";

	printf("%lu\n", ft_strspn(s, reject));
	printf("%lu\n", strspn(s, reject));
	return (0);
}