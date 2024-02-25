
#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	while (n > 2)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			is_power_of_2(n);
		}
		else
			break;
	}
	if (n == 2)
		return (1);
	else
		return (0);
}

int main ()
{
	unsigned int check;
	check = 32;

	printf("%d\n", is_power_of_2(check));
	return(0);
}