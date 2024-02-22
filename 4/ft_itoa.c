#include <stdlib.h>
#include <stdio.h>

int	itoa_len(int nbr)
{
	int len;
	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr/10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	char	*str;
	int		len;
	if (nbr == -2147483648)
		return ("-2147483648");
	len = itoa_len(nbr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return(0);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}

// int	main ()
// {
// 	printf("%s", ft_itoa(-387));
// 	return(0);
// }