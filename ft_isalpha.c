/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:13:06 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:17:29 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		write (1, "it is alpha\n", 12);
		return (1);
	}
	else
	{
		write (1, "it is not alpha\n", 16);
		return (0);
	}
}

/*int main (void)
{
	int a = '1';
	int b = ' ';
	int c = 'a';
	ft_isalpha(a);
	ft_isalpha(b);
	ft_isalpha(c);
	char sos[] = "gfñdlgkfdñkg";
	int i;
	   for(i = 0; sos[i]; i++) 
      printf("%c, %d\n", sos[i], isascii(sos[i])); //comprueba letra a letra
	return (0);
}*/
