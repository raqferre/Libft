/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:37:34 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/08 15:58:11 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
				flag = 0;
		s++;
	}
	return (count);
}

static size_t	count_letters(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	free_word(char **str, size_t words)
{
	long long int	i;

	i = (long long int) words;
	while (--i >= 0)
	{
		free(str[i]);
		str[i] = (void *)0;
	}
	free (str);
}

static char	**write_words(char const *s, char c, size_t words, char **strings)
{
	size_t	i;
	size_t	len_word;

	i = 0;
	len_word = 0;
	while (i < words)
	{
		while (*s && (*s == c))
				s++;
		if (*s)
		{
			len_word = count_letters(s, c);
			strings[i] = ft_substr(s, 0, len_word);
			if (!strings[i])
			{
				free_word(strings, i);
				return (NULL);
			}
			i++;
		}
		s += len_word;
	}
	strings[words] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words (s, c);
	out = malloc (sizeof(char *) * (words + 1));
	if (!out)
		return (NULL);
	out = write_words(s, c, words, out);
	return (out);
}
