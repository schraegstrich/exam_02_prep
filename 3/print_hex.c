#include <unistd.h>
#include <stdio.h>

int	str_to_int(char *str)
{
	int i;
	int n;

	i = 0;

	while (str[i] != '\0')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write (1,&hex_digits[n % 16], 1);
}

int	main (int argc, char **argv)
{

	if (argc == 2)
		print_hex(str_to_int(argv[1]));
	write (1, "\n", 1);
	return (0);
}