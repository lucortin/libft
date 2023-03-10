/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:34:26 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:19:47 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main (void)
{
	int a = '1';
	int b = ' ';
	int c = 'a';
	ft_isprint(a);
	printf("%c, %d\n", a, ft_isprint(a));
	ft_isprint(b);
		printf("%c, %d\n", b, ft_isprint(b));
	ft_isprint(c);
		printf("%c, %d\n", c, ft_isprint(c));
	char sos[] = "e}}[{÷¬”≠≠““÷∞/&/$&®€æ®€";
	int i;
	   for(i = 0; sos[i]; i++) 
      printf("%c, %d\n", sos[i], ft_isprint(sos[i])); //comprueba letra a letra
	return (0);
}*/