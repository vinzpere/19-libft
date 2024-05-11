/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:04:39 by vpere             #+#    #+#             */
/*   Updated: 2024/05/11 15:52:35 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	rot;

	i = 0;
	k = 1;
	rot = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rot = rot * 10 + str[i] - 48;
		i++;
	}
	rot *= k;
	return (rot);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;

// 	str = "+1000000000000000000000000123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// }