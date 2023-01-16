/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:58:14 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 11:09:00 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	rotone(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
			ft_putchar(s[i] + 1);
		else if (s[i] == 'z' || s[i] == 'Z')
			ft_putchar(s[i] - 25);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
