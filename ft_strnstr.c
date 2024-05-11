/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:52:10 by vpere             #+#    #+#             */
/*   Updated: 2024/05/09 20:17:42 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nl;

	if (!haystack && len <= 0)
		return (0);
	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	nl = ft_strlen(needle);
	while (i <= len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == 0 && (i + j) <= len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// int    main(void)
// {
//     printf("%s", ft_strnstr("aaabcabcd", "abcd", 9));
// }
