/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:47:22 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:20:05 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*s;

	d = (unsigned char) c;
	s = (unsigned char *) str;
	i = 0;
	while (i <= n)
	{
		if (s[i] == d)
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main (void)
// {
// 	char s[] = "abcdefg";
// 	int a = 'c';
// 	printf ("%s", ft_memchr(s, a, 4));
// 	return (0);
// }