/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:19:23 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/07 16:16:33 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *) str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j] || i + j == len)
				return ((char *) str + i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[] = "supercalifragilissticoespialidoso";
// 	char	b[] = "fragil";
// 	char	c[] = "catata";
// 	char 	d[] = "tico";  
// 	char 	e[] = "";
// 	printf("%s ", ft_strnstr (a, e, 4));
// 	printf("%s ", ft_strnstr (a, b, 4));
// 	printf("%s ", ft_strnstr (a, c, 6));
// 	printf("%s", ft_strnstr (a, d, 4));
// 	return (0);
// }