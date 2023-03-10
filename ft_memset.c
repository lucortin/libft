/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:06:13 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:22:45 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char *) c;
	return (b);
}

/*int main (void)
{
    size_t x = 3;
    int a = 42;
    int *p;
    p = malloc(x*sizeof(int));
    ft_memset(p, a, x);
    printf("%s", (unsigned char*)p);
    return(0);
}*/
/*#include <unistd.h>
#include <stdio.h>
 void *ft_memset(void *s, int c, int n)
{
    int    j;
    char r[] = "\0";

    j = 0;

    while (j <= n)
    {
        r[j] = c;
        j++;
    }
    s = &r[];
	    printf("%d ", *s);
    return (0);
}

int main(void)
{
    int s = 5;
    int d = 'a';
    void *b;
    ft_memset(b, d, s);
    return (0);
}*/
