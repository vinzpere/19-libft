/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:12:16 by vpere             #+#    #+#             */
/*   Updated: 2024/05/09 18:10:59 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bdst;
	unsigned char	*bsrc;

	i = 0;
	bdst = (unsigned char *)dst;
	bsrc = (unsigned char *)src;
	if (n == 0 || bdst == bsrc)
		return (bdst);
	while (i < n)
	{
		bdst[i] = bsrc[i];
		i++;
	}
	return (bdst);
}

// int	main(void)
// {
// 	char	strs[] = "zyxwvutsrqponmlkjihgfedcba";
// 	char	strd[50];

// 	printf("%s", ft_memcpy(strd, strs, 14));
// }
