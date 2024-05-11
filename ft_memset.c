/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:24:44 by vpere             #+#    #+#             */
/*   Updated: 2024/05/03 18:41:52 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*q;

	q = b;
	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = "frero";
	printf("%p", ft_memset(8, 6, 5));
	printf("%p", memset(str, 6, 5));
}
*/
