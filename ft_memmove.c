/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:12:23 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/01 19:15:29 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += n - 1;
		d += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
// 	// char	a[] = "carecola                      ";
// 	char	a[] = "0123456789abcdefg";
// 	ft_memmove(a, a + 3, 5);
// 	ft_memmove(a + 3, a, 5);
// 	printf("%s\n", a);
//     return (0);
// }