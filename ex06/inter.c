/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:16:15 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 14:16:24 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *s)
{
    int     len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

int     is_not_in_str(char *u, int i, char c)
{
    int j;

    j = 0;
    while (j < i)
    {
        if (u[j] == c)
            return(0);
        j++;
    }
    return (1);
}

void    inter(char *s, char *t)
{
    int     i;
    int     j;

    i = 0;
    j = ft_strlen(t);
    while (s[i])
    {
        if (is_not_in_str(s, i, s[i]) && !is_not_in_str(t, j, s[i]))
            write(1, &s[i], 1);
        i++;
    }

}

int     main(int argc, char **argv)
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    write (1, "\n", 1);
    return (0);
}