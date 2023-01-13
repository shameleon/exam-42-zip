/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:45:02 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/12 14:17:37 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	(void)argv;
	i = 1;
	while (i <= 100)
	{
		if (i % 3 && i % 5 )
			ft_putnbr(i);
		else
		{
			if (i % 3 == 0)
				write (1, "fizz", 4);
			if (i % 5 == 0)
				write (1, "buzz", 4);
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
