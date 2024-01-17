/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:37:29 by ahadama-          #+#    #+#             */
/*   Updated: 2024/01/17 14:53:44 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	repeat;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				repeat = av[1][i] - 'a';
				while (repeat >= 0)
				{
					write(1, &av[1][i], 1);
					repeat--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				repeat = av[1][i] - 'A';
				while (repeat >= 0)
				{
					write(1, &av[1][i], 1);
					repeat--;
				}
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
