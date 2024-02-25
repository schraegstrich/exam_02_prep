
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	unsigned int check;
	i = 1;
	check = tab[0];

	if (len == 0)
		return(0);

	while (i <= len)
	{
		if (check < tab[i])
			check = tab[i];
		i++;
	}
	return(check);
}

// int main ()
// {
// 	int array[] = {3, 4, 50, 1};
// 	printf("%d\n", max(array, 0));
// 	return(0);
// }