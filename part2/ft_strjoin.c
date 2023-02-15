/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:53:56 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 14:10:11 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		h;
	int		s1size;
	int		s2size;
	char	*s3;

	i = 0;
	h = 0;
	s1size = 0;
	s2size = 0;
		while (s1[s1size])
			s1size++;
		while (s2[s2size])
			s2size++;
		s3 = malloc(sizeof(char) * (s1size + s2size + 1));
		while (h < s1size)
			s3[i++] = s1[h++];
		h = 0;
		while (h < s2size)
			s3[i++] = s2[h++];
		s3[i] = '\0';
		return (s3);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "hola";
	char b[] = "caracola";
	printf("%s", ft_strjoin(a, b));
	return (0);
}
