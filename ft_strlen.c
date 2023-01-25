/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:23:11 by lucortin          #+#    #+#             */
/*   Updated: 2022/11/24 14:27:38 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "hola";
	char b[] = "caracola";
	printf("%d ", ft_strlen(a));
	printf("%d", ft_strlen(b));
	return (0);
}*/
