/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:15:58 by lkirillo          #+#    #+#             */
/*   Updated: 2024/02/01 16:54:39 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int 	i;
	char	temp;

	i = 0;
	temp = 0;
	if (argc != 2)
	{
		write (1,"\n",1);
		return (0);
	}
	while (argv[1][i] && argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			temp = argv[1][i] - 32;
			write(1, &temp, 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			temp = argv[1][i] + 32;
			write(1, &temp, 1);
		}
		else
			write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}