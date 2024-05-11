/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:01:32 by vpere             #+#    #+#             */
/*   Updated: 2024/05/11 15:52:06 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	int		i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == 0) && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static size_t	nextc(char const *s, char c, size_t start)
{
	start++;
	while (s[start] != c && s[start])
		start++;
	return (start);
}

static void	ft_free(char **tab, size_t cool)
{
	size_t	i;

	i = 0;
	while (i < cool)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	mots;
	char	**tableau;

	mots = 0;
	i = 0;
	if (!s)
		return (0);
	tableau = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!tableau)
		return (free(tableau), NULL);
	while (mots < wordcount(s, c) && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tableau[mots] = ft_substr(s, i, (nextc(s, c, i) - i));
		if (!tableau[mots])
			return (ft_free(tableau, mots), NULL);
		i = nextc(s, c, i);
		mots++;
	}
	tableau[mots] = 0;
	return (tableau);
}

// int	main(void)
// {
// 	char *str = "hello!";
// 	char sep = ' ';
// 	char **tab;
// 	int i = 0;
// 	tab = ft_split(str, sep);
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }