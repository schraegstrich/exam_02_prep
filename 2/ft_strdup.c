#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len;
	int i;
	char *dst;
	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return(0);
	while (i <= len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}