
#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int len;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		len--;
		while(argv[1][len] == ' '|| argv[1][len] == '\t')
			len--;
		while(argv[1][len] != ' '&& argv[1][len] != '\t')
			len--;
		len++;
		while (argv[1][len] && (argv[1][len] != ' '&& argv[1][len] != '\t'))
			write(1, &argv[1][len++],1);
	}
	write(1, "\n", 1);
	return(0);
}