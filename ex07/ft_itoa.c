/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:13:28 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/13 09:12:47 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_nbrlen(long int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char		*str;
	long int	n;
	int		neg;
	int		len;

	neg = 0;
	if (nbr < 0)
		neg = 1;
	n = (1 - 2 * neg) * (long int)nbr;
	len = ft_nbrlen(n) + neg;
	str = (char *)malloc (sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	if (neg)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while (n > 9)
        {
                str[len] = n % 10 + '0';
                n /= 10;
		len--;
        }
        str[len] = n % 10 + '0';
	return (str);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf ("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
} 
*/
