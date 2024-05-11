/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:42:03 by vpere             #+#    #+#             */
/*   Updated: 2024/05/11 15:40:34 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	buff;

	buff = count * size;
	if (size != 0 && ((buff / size) != count) && buff != 0)
		return (NULL);
	str = malloc(buff * sizeof(char));
	if (!str)
		return (0);
	ft_bzero(str, buff);
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_calloc(80, 0));
// }