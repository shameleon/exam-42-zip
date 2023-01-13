/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:24:33 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/13 14:36:45 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_spacer(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int     is_word(int c)
{
        if (c >= 33 && c <= 176)
                return (1);
        return (0);
}

void	expand_str(char *s)
{
	int	i;

	i = 0;

	while (s[i] && is_spacer(s[i]))
		i++;
	while (is_word(s[i]))
	{
		while (s[i] && is_word(s[i]))
		{
			write(1, &s[i], 1);
			i++;
		}
		while (s[i] && is_spacer(s[i]))
                	i++;
		if (s[i] && is_word(s[i]) && is_spacer(s[i-1]))
			write(1, "   ", 3);
	}
}

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
} */
