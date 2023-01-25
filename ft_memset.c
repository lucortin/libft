/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:06:13 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/18 15:18:46 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * It sets the first len bytes of the memory area pointed 
 to by b to the specified value c.
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c The character to fill the memory with.
 * @param len the number of bytes to fill
 * 
 * @return A pointer to the beginning of the memory area b.
 */
void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;

    while (i < len)
    ((unsigned char*)b)[i++] = (unsigned char) c;

    return (b);
}

int main (void)
{
    size_t x = 3;
    int a = 42;
    int *p;
    p = malloc(x*sizeof(int));
    ft_memset(p, a, x);
    printf("%s", (unsigned char*)p);
    return(0);
}