#include <unistd.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int i;
	int az;
	i = 0;
	az = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				az = 26 - (argv[1][i] - 64) - (argv[1][i] - 65);
				argv[1][i] = argv[1][i] + az;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				az = 26 - (argv[1][i] - 96) - (argv[1][i] - 97);
				argv[1][i] = argv[1][i] + az;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);

//better way by smarter people
// 	int main(int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc == 2)
// 	{
// 		while(argv[1][i]) 
// 		{
// 			if(argv[1][i] >= 65 && argv[1][i] <= 90)
// 			{	
// 				argv[1][i] = 90 - argv[1][i] + 65;
// 			}
// 			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
// 			{
// 				argv[1][i] = 122-argv[1][i] + 97;
// 			}
// 			write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write (1,"\n",1);
// }	

}