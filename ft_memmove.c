/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:50:10 by vpere             #+#    #+#             */
/*   Updated: 2024/05/09 18:11:57 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (d);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*src;
// 	char	*dst;

// 	str = malloc(10);
// 	ft_memcpy(str, "abcdefghi", 10);
// 	str[9] = 0;
// 	src = &str[5];
// 	dst = &str[4];
// 	printf("%s\n", ft_memmove(dst, src, 4));
// 	printf("%s", str);
// }
