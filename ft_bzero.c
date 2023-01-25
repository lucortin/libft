/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:12:50 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/25 13:37:07 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
        ((unsigned char*)s)[i++] = '\0';
}

/*#include <stdio.h>
int main (void)
{
    size_t x = 3;
    char *p;
    char a[] = "caracola";
    p = &a;

    ft_bzero(p, x);
    printf("%s", (unsigned char*)&p[3]);
    return(0);
}*/