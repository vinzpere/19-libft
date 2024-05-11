/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:38:08 by vpere             #+#    #+#             */
/*   Updated: 2024/05/10 17:42:57 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*s3;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = malloc((i + j + 1) * sizeof(char));
	if (!s3)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i++] = s2[j++];
	}
	s3[i] = 0;
	return (s3);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strjoin("varan", "de comodo"));
}
*/