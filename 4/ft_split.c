#include <stdlib.h>

char *ft_strncpy(char *dst, char *src, int len)
{
	int i;

	i = 0;
	while ( i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int fin;
	int wc;

	i = 0;
	j = 0;
	fin = 0;
	wc = 0;
	char **res;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' || str[i] != '\n'))
			i++;
	}
	res = malloc((wc + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		i = j;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			res[fin] == malloc((i - j + 1) * sizeof(char));
			ft_strncpy(res[fin++], &str[j], i - j);
		}
	}
	res[fin] = '\0';
	return(res);
}