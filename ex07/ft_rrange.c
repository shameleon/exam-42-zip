/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:21:53 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/13 10:03:40 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	size_t	size;
	size_t	i;
	int rev;

	i = 0;
	rev = 1;
	if (end < start)
		rev = - 1;
	size = (end - start) * rev + 1;
	arr = (int *)malloc (sizeof(*arr) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = end - i * rev;
		i++;
	}
	return (arr);
}

int	main(int argc, char **argv)
{
	int	*arr;
	int	start;
	int 	end;
	int	size;
	int	i;

	i = 0;
	if (argc != 3)
		return (0);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	arr = ft_rrange(start, end);
	if (end < start)
		size = start - end + 1;
	else
		size = end - start + 1;
	while (i < size)
	{
		printf ("%d | ", arr[i]);
		i++;
	}
	free (arr);
	printf ("\n");
	return (0);
} 
