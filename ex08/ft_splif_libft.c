/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:57:25 by jmouaike          #+#    #+#             */
/*   Updated: 2022/12/06 10:21:08 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_words(char **warr, size_t w)
{
	size_t	i;

	i = 0;
	while (i <= w)
	{
		free (warr[i]);
		i++;
	}
	free (warr);
	return (NULL);
}

static char	*fill_word(char *s, size_t wlen)
{
	char	*word;

	word = (char *)malloc (sizeof(*word) * (wlen + 1));
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s, wlen);
	word[wlen] = '\0';
	return (word);
}

static char	**get_words(char **warr, char const *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	wlen;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		wlen = 0;
		while (s[i + wlen] != '\0' && s[i + wlen] != c)
			wlen++;
		if (wlen > 0)
		{
			warr[w] = fill_word((char *)(s + i), wlen);
			if (warr[w] == NULL)
				free_words(warr, w);
			i += wlen;
		}
		w++;
	}
	return (warr);
}

static int	count_words(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			wc++;
		else if (i > 0 && s[i] != c && s[i - 1] == c)
			wc++;
		i++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**warr;

	if (s == NULL)
		return (NULL);
	wc = count_words(s, c);
	warr = (char **)malloc (sizeof(*warr) * (wc + 1));
	if (!warr)
		return (NULL);
	warr = get_words(warr, s, c);
	warr[wc] = NULL;
	return (warr);
}