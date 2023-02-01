/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:19:32 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/26 13:36:36 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s)
{
	int	i;
	int	len;
	char *s2;

	i = 0;
	len = ft_strlen((char *) s);
	s2 = malloc(sizeof(char) * len);
	while(s[i])
	{
		s2[i] = s[i];
		i++;
	}

	return (s2);
}

int	main(void)
{
	char str[] = "socorro";
	printf ("%s", ft_strdup(str));
	return (0);
}