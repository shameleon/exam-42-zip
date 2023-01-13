/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:48 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/13 15:25:53 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	size_t	size;
	size_t	i;
	int		asc;

	i = 0;
	asc = 1;
	if (start > end)
		asc = - 1;
	size = (end - start) * asc + 1;
	arr = (int *)malloc (sizeof(*arr) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = start + i * asc;
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
	arr = ft_range(start, end);
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
