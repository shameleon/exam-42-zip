/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:11:22 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/12 15:40:33 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i--;
	while (s[i] >= 32 && s[i] <= 126)
		i--;
	i++;
	while (s[i] >= 32 && s[i] <126)
	{
		write (1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
