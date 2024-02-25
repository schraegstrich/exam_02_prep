#include <unistd.h>
#include <stdio.h>

int repeated_occurences(char *str, char c, int len)
{
	while (len > 0)
	{
		if (str[len] == c)
			return(1);
		len--;
	}
	return(0);
}

int	main (int argc, char **argv)
{
	int i;
	int j;
	i = 0;
	
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && (i == 0 || !repeated_occurences(argv[1], argv[1][i], i - 1)))
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

// int main ()
// {
// 	char str[] = "Hello";
// 	char c = 'h';
// 	int len = 2;

// 	printf("%d\n", repeated_occurences(str, c, len));
// 	return(0);
// }