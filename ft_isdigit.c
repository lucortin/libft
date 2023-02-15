/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:12:47 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:18:56 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (('0' <= c && c <= '9'))
	{
		write (1, "it is digit\n", 12);
		return (1);
	}
	else
	{
		write (1, "it is not digit\n", 16);
		return (0);
	}
}

/*int main (void)
{
	int a = '1';
	int b = ' ';
	int c = 'a';
	ft_isdigit(a);
	ft_isdigit(b);
	ft_isdigit(c);
	return (0);
}*/
