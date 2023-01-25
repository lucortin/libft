/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:39:29 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/25 18:26:07 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *cad, int c)
{
	int	i;
	int n;

	i = 0;
	while (cad[i])
	{
		if (cad[i] == (char)c)
			n = i;
		i++;
	}
	return ((char *) cad + n);
}

#include <stdio.h>
//return ((char *) &cad[i]);
int    main(void)
{
    char sss[] = "hola";
    printf ("%c\n", ft_strrchr(sss, 'o'));
    return (0);
}