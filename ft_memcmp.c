/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:57:43 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:20:33 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				c;
	const unsigned char	*e;
	const unsigned char	*d;

	d = (unsigned char *)s1;
	e = (unsigned char *)s2;
	c = 0;
	while (c < n)
	{
		if (d[c] == e[c])
			c++;
		if (c == n)
			return (0);
		if (d[c] != e[c])
			return (d[c] - e[c]);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "abcdefgn";
// 	char b[] = "abcdefg3";
// 	printf("%d\n", ft_memcmp(a, b, 7));
// 	return (0);
// }