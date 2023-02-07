/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:42:42 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/07 16:10:41 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
//     char a[] = "carecola";
//     // memcpy(a + 3, a, 5);
//     // printf("%s\n", a);
// 	// ft_memcpy(a + 3, a, 5);
//     // printf("%s\n", a);
//     // memmove(a + 3, a, 5);
//     // printf("%s\n", a);

// 	printf("%s\n", memmove(a + 3, a, 5));
// 	printf("%s\n", memcpy(a + 3, a, 5));
// 	printf("%s\n", ft_memcpy(a + 3, a, 5));
// 	return (0);
// }