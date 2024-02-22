#include <stdlib.h>
#include <stdio.h>

int	ft_array_size(int start, int end)
{
	int	n;

	n = end - start;
	if (n < 0)
		n *= -1;
	n++;
	return(n);
}

int	*ft_rrange(int start, int end)
{
	int i;
	int array_size;
	int	*res;

	i = 0;
	array_size = ft_array_size(start, end);
	res = malloc(array_size * sizeof(int));
	if (!res)
		return (0);
	while (i < array_size)
	{
		if (start <= end)
			res[i++] = end--;
		if (start > end)
			res[i++] = end++;
	}
	return (res);
}

int main (void)
{
	int	min = 1;
	int max = -3;
	int array_size = ft_array_size(min, max);
	int i = 0;
	int *array = ft_rrange(min, max);
	while (i < array_size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
