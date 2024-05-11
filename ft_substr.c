/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:56:39 by vpere             #+#    #+#             */
/*   Updated: 2024/05/10 14:52:18 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - (size_t)start) < len)
		len = ft_strlen(s) - (size_t)start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (j < len && s[i])
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = 0;
	return (sub);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_substr("MON FRERE EN CHRIST", 4, 50));
}
*/