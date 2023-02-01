/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:47:22 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/26 14:04:48 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	i = 0;
	while (i <= n)
	{
		if ((unsigned char *) str[i] == (unsigned char *) c)
			return (str[i]);
		i++;
	}
	return (0);
}

int	main (void)
{
	char s[] = "abcdefg";
	int a = 'c';
	printf ("%s", ft_memchr(s, a, 4));
	return (0);
}