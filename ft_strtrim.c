/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:04:33 by vpere             #+#    #+#             */
/*   Updated: 2024/05/11 16:12:31 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	beg = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[beg]) != 0 && beg < end)
		beg++;
	while (ft_strchr(set, s1[end]) != 0 && end > beg)
		end--;
	end++;
	return (ft_substr(s1, (unsigned int)beg, (end - beg)));
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim(" xxxxx ", "x "));
// }