/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 07:45:44 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/13 12:14:32 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* check if c is in string s on [0,i[ interval */
int	is_first_char(char *u, int i, char c)
{
	int k;

	k = 0;
	while (k < i)
	{
		if (u[k] == c)
			return (0);
		k++;
	}
	return (1);
}

void	ft_union(char *s, char *t)
{
	int     i;
	int     j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (is_first_char(s, i, s[i]) && is_first_char(t, j, s[i]))
			write (1, &s[i], 1);
		i++;	
	}
	while (t[j])
        {
                if (is_first_char(s, i, t[j]) && is_first_char(t, j, t[j]))
                        write (1, &t[j], 1);
                j++;
        }

}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
} */
