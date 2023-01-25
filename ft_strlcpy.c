/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:44:39 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/18 16:48:17 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size )
{
	size_t	length;
	size_t	i;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	while (src[i] != '\0' && dest[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

#include <stdio.h>
int main(void)
{
	int n = 6; //n es el tamaño del destino
	char	a[8] = "General"; //origen
	char	b[6] = "Hello"; //destino
	printf("%s\n", b);
	ft_strlcpy(b, a, n);
	printf("%s\n", b);
	return (0);
}
