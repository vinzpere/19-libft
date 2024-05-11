/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:57:52 by vpere             #+#    #+#             */
/*   Updated: 2024/05/10 18:14:01 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	maxcat;
	size_t	dstsrc;

	i = 0;
	j = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	maxcat = dstsize - i - 1;
	dstsrc = ft_strlen(src) + ft_strlen(dst);
	if (dstsize > i)
	{
		while (src[j] && j < maxcat)
		{
			dst[i++] = src[j++];
		}
		dst[i] = 0;
	}
	if (dstsize < i)
		return (ft_strlen(src) + dstsize);
	return (dstsrc);
}

// int	main(void)
// {
// 	// char	buff2[0xF00] = "there is no stars in the sky";
// 	// char	*str;
// 	// size_t	max;

// 	// str = "the cake is a lie";
// 	// max = strlen("") + 4;
// 	char dst[101] = "coffret";
// 	// printf("%zu", ft_strlcat(dst, "pierre et vacances", 17));
// 	// printf("%zu\n", ft_strlcat(dst, NULL, 100));
// 	printf("%zu\n", strlcat(dst, NULL, 100));
// }
