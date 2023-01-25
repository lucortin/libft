/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:15:16 by lucortin          #+#    #+#             */
/*   Updated: 2022/11/24 16:28:13 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
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
