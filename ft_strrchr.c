/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:14:56 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:14:28 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *cad, int c)
{
	int	len;

	len = ft_strlen ((char *) cad);
	while (len > 0)
	{
		if (cad[len] == (char)c)
			return ((char *) &cad[len]);
		len--;
	}
	return (0);
}

// #include <stdio.h>
// int    main(void)
// {
//     char sss[] = "holoa";
//     printf ("%s\n", ft_strrchr(sss, 'b'));
//     return (0);
// }