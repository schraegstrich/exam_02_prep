#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char **argv)
{
	int	number;
	int i;

	i = 1;
	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (number >= i++)
		{
			if (number % i == 0)
			{
				printf("%d",i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1; 
			}

		}
	}
	printf("\n");
	return (0);
}