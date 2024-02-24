#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
				return(i);
			if (s[i] == accept[j])
				break ;
			j++;
		}
		i++;
	}

	if (i < j)
		return(i);
	else
		return(j);
}

int main ()
{
	const char *s;
	const char *reject;

	s = "rej";
	reject = "ejrect";

	printf("%lu\n", ft_strspn(s, reject));
	printf("%lu\n", strspn(s, reject));
	return (0);
}