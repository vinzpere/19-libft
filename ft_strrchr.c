/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:21:21 by vpere             #+#    #+#             */
/*   Updated: 2024/05/07 18:55:31 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	i;
	char	*buffer;

	i = 0;
	buffer = (char *)s;
	while (buffer[i])
		i++;
	while (i >= 0)
	{
		if (buffer[i] == (char)c)
			return (&buffer[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("rital des iles", 'i'));
}
*/