/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:21:37 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:34:47 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(sizeof(char) * (len + 1));
	while (s2 && i != len)
		s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "abcdefg";
// 	printf("%s", ft_substr(a, 3, 4));
// 	return (0);
// }