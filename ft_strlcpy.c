/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:14:08 by vpere             #+#    #+#             */
/*   Updated: 2024/05/07 18:15:05 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	if (i > j)
		return (i - 1);
	return (j);
}

// int	main(void)
// {
// 	char	dest[8];

// 	printf("%zu", ft_strlcpy(dest, "HHHHD  ouasyf uohsad kjalsd", 0));
// }
