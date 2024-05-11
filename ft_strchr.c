/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:11:40 by vpere             #+#    #+#             */
/*   Updated: 2024/05/07 18:52:19 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = (char *)s;
	while (buffer[i])
	{
		if (buffer[i] == (char)c)
			return (&buffer[i]);
		i++;
	}
	if (buffer[i] == (char)c)
		return (&buffer[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%s", ft_strchr("couille", 'u' + 1024));
// 	printf("%s", strchr("couille", 'u' + 1024));
// }
