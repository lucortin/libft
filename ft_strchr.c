/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:39:29 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:23:07 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *cad, int c)
{
	int	i;

	i = 0;
	while (cad[i])
	{
		if (cad[i] == (char)c)
			return ((char *) cad + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
//return ((char *) &cad[i]);
int    main(void)
{
    char sss[] = "hola";
    printf ("hola: %p, ola: %p\n", sss, ft_strchr(sss, 'o'));
    return (0);
}*/