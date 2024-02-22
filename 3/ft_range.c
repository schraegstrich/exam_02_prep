#include <stdlib.h>
#include <stdio.h>

//
// because apparently all this was so fing unnecessary
// int	ft_array_size (int start, int end)
// {
// 	int	array_size;
// 	array_size = 0;
// 	if ((start >= 0 && end >= 0) || (start < 0 && end < 0))
// 	{
// 		if (end >= start)
// 			array_size = end - start + 1;
// 		if (end < start)
// 			array_size = start - end + 1;
// 	}
// 	if ((start < 0 && end >= 0) || (start >= 0 && end < 0))
// 	{
// 		if (start < 0)
// 			start = -start;
// 		if (end < 0)
// 			end = -end;
// 		array_size = start + end + 1;
// 	}
// 	return (array_size);
// }
int	ft_array_size(int start, int end)
{
	int	n;

	n = end - start;
	if (n < 0)
		n *= -1;
	n++;
	return(n);
}

int	*ft_range(int start, int end)
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
			res[i++] = start++;
		if (start > end)
			res[i++] = start--;
	}
	return (res);
}


int main (void)
{
	int	min = 0;
	int max = 0;
	int array_size = ft_array_size(min, max);
	int i = 0;
	int *array = ft_range(min, max);
	while (i < array_size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
