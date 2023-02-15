/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:10:43 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 18:25:48 by lucortin         ###   ########.fr       */
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
	len = ft_strlen(s1);
	while (s1[i] == set[i])
		i++;
	s3 = malloc(sizeof(char) * (len - i));
	while(s3)
		s3[j++] = s1[i++];
	return (s3);
}

int	main(void)
{
	char a [] = "abcdefghijkabc";
	char b [] = "abc";
	ft_strtrim(a, b);
	return (0);
}