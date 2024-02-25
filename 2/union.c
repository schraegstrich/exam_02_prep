#include <unistd.h>

int	repeated_occurences(char *str, char c, int len)
{
	int i;
	i = 0;
	while (i < len && len > 0)
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int y;
	
	i = 0;
	j = 0;
	y = 0;
	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
			argv[1][i++] = argv[2][j++];
		i--;
		while(y <= i)
		{
			if(!repeated_occurences(argv[1], argv[1][y], y))
				write(1, &argv[1][y], 1);
			y++;
		} 
	}
	write(1, "\n", 1);
	return(0);
}