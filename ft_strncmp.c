/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:15:16 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:25:47 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	int	s = 3;
	char	a[5] = "Halo";
	char	b[6] = "Adios";
	char	c[6] = "Adios";
	char	d[5] = "Hala";

	printf("%d, ",  ft_strncmp(a, b, s));
	printf("%d, ",  ft_strncmp(b, a, s));
	printf("%d, ",  ft_strncmp(b, c, s));
	printf("%d, ",  ft_strncmp(a, d, s));
	printf("%d",  ft_strncmp(d, a, s));
	return(0);
}*/
