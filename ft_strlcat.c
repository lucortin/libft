/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:45:15 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/18 16:52:14 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (dest[i])
		i++;
	while (src[sum])
		sum++;
	while (src[j] && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (sum);
}

#include <stdio.h>
int main(void)
{
	size_t s = 5;
	char a[] = "holaa";
	char b[] = "caracola";
	ft_strlcat(a, b, s);
	printf("%s ", a);
	return (0);
}
