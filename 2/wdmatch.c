#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main (int argc, char **argv)
{
	int i;
	int j;
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[2][i++] == argv[1][j])
				j++;
		}
		if(!argv[1][j])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}