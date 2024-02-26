
#include <unistd.h>

int	main (int argc, char **argv)
{
	int i;
	int start_fw;
	int end_fw;
	int flag;

	i = 0;

	if (argc > 1 && argv[1][0])
	{
		while (argv[1][i])
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			start_fw = i;
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i++;
			end_fw = i;
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while(argv[1][i])
			{
				while((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
					i++;
				if (argv[1][i] == ' ' || argv[1][i] == '\t')
					flag = 1;
				write(1, &argv[1][i], 1);
				i++;
			}
			if (flag != 0)
				write(1, " ", 1);
			while (start_fw < end_fw)
			{
				write(1, &argv[1][start_fw], 1);
				start_fw++;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}