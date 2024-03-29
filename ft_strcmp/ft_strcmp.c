/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:48 by ahadama-          #+#    #+#             */
/*   Updated: 2024/01/17 15:21:02 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("8", "1"));
	printf("%d\n", strcmp("8", "1"));
}*/
