/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:10:43 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/20 17:06:27 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*s3;

	i = 0;
	j = 0;
	len = ft_strlen((char *) s1);
	while (s1[i] == set[i])
		i++;
	while (s1[len] == set[len])
		len--;
	s3 = malloc(sizeof(char) * (len - i + 1));
	while(j < len)
		s3[j++] = s1[i++];
	s3[len] = '\0';
	return (s3);
}

#include <stdio.h>
int	main(void)
{
	char a [] = "abcdefghijkabc";
	char b [] = "abc";
	printf("%s", ft_strtrim(a, b));
	return (0);
}