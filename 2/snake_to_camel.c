#include <unistd.h>

int	main (int argc, char **argv)
{
	int		i;
	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0' )
		{
			if (argv[1][i] == '_')
				argv[1][i+1] = argv[1][i+1] - 32;
			else
				write (1, &argv[1][i], 1);
			i++;
		}

	}
	write (1, "\n", 1);
	return(0);

}