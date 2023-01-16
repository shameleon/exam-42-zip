/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:51:06 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 15:13:03 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	i;
	int	rev;
	int	size;

	i = 0;
	rev = 1;
	if (end < start)
		rev = -1;
	size = (end -start) * rev + 1;
	arr = (int *)malloc (sizeof(*arr) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = end - rev * i ;
		i++;
	}
	return (arr);
}
int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	rev;
	int	size;
	int	*arr;
	int	i;

	if (argc != 3)
		return (0);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	arr = ft_rrange(start, end);
	i = 0;
	rev = 1;
	if (end < start)
		rev = -1;
	size = (end - start) * rev + 1;
	while ( i < size)
		printf ("%d, ", arr[i++]);
	free (arr);
	return (0);
}
