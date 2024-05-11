/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:00:26 by vpere             #+#    #+#             */
/*   Updated: 2024/05/10 14:33:11 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;
	long	m;

	m = (long)n;
	j = count(m);
	str = malloc((j + 1) * sizeof(char));
	if (!str)
		return (0);
	if (m == 0)
		str[0] = '0';
	str[j] = 0;
	if (m < 0)
	{
		m *= -1;
		str[0] = '-';
	}
	j--;
	while (m != 0)
	{
		str[j] = (m % 10) + 48;
		m = m / 10;
		j--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(0));
// }
