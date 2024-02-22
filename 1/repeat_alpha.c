/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:31:31 by lkirillo          #+#    #+#             */
/*   Updated: 2024/02/03 15:00:31 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	i;
	int count;
	
	i = 0;
	count = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 97;
				while (count > 0)
				{
					write (1, &argv[1][i], 1);
					count--;
				}
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 64;
				while (count > 0)
				{
					write (1, &argv[1][i], 1);
					count--;
				}
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}