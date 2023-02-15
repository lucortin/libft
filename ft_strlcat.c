/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:45:15 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:24:12 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destsize;
	size_t	srcsize;

	i = 0;
	j = 0;
	destsize = 0;
	srcsize = 0;
	while (src[destsize])
		destsize++;
	while (src[srcsize])
		srcsize++;
	while (dest[i])
		i++;
	while (src[j] && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (destsize + srcsize);
}

/*#include <stdio.h>
int main(void)
{
	size_t s = 5;
	char a[] = "holaa";
	char b[] = "caracola";
	ft_strlcat(a, b, s);
	printf("%s ", a);
	return (0);
}*/
