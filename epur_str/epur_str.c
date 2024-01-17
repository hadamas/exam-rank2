/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:31 by ahadama-          #+#    #+#             */
/*   Updated: 2024/01/17 17:48:37 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1])
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;
	int	len;
	int	end;

	end = 0;
	len = ft_strlen(av[1]);
	if (ac == 2)
	{
		i = 0;
		while (av[1][i] && (av[1][i] == 9 || av[1][i] == 32))
			i++;
		while (av[1][i] && (av[1][len] == 9 || av[1][len] == 32))
		{
			end++;
			len--;
		}
		while (av[1][i])
		{
			/*while (av[1][i] == 9 || av[1][i] == 32)
				i++;
			while (av[1][len] == 9 || av[1][len] == 32)
			{
				end++;
				len--;
			}*/
			while (av[1][i] > 32 && av[1][i] < 127)
			{
				write(1, &av[1][i], 1);
				i++;
				/*while (av[1][i] > 6 && av[1][i] < 33)
				{
					write(1, " ", 1);
					i++;
				}*/
			}
			while (av[1][i] > 6 && av[1][i] < 33)
				i++;
			if (av[1][i + end] == '\0')
				 return (0);
			write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
