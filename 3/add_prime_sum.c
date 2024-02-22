#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int n;
	int i;
	n = 0;
	i = 0;
	while (str[i])
		n = n * 10 + str[i++] - '0';
	return (n);
}

int	is_prime(int num)
{
	int i;
	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void putnbr(int n)
{
	char c;
	if (n >= 10)
		putnbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int	main (int argc, char **argv)
{
	int n;
	int primesum;
	if (argc != 2 || argv[1][0] == '-')
		write(1, "0", 1);
	else if (argc == 2)
	{
		n = 0;
		primesum = 0;
		n = ft_atoi(argv[1]);
		while (n > 0)
		{
			if(is_prime(n))
				primesum += n;
			n--;
		}
		putnbr(primesum);    
	}
	write(1, "\n", 1);
	return (0);
}