/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:18:54 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 13:23:02 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	char *s;

	s = "01234abcde";
	printf ("%d\n", ft_strlen(s));
	return (0);
}*/
