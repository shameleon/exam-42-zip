/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:24:33 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 09:48:11 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*  */

int	is_spacer(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	expand_str(char *s)
{
	int	i;
	int 	wc;

	i = 0;
	wc = 0;
	while (s[i] && is_spacer(s[i]))
		i++;
	while (s[i])
	{
		if (i > 0 && wc > 0 && !is_spacer(s[i]) && is_spacer(s[i-1]))
			write(1, "   ", 3);
		if(!is_spacer(s[i]))
		{
			wc = 1;
			write(1, &s[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
