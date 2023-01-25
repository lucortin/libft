/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:42:42 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/18 17:07:27 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    while (i < n)
    {
         ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
         i++;
    }
    return(0);
}

#include <stdio.h>
int main (void)
{
    size_t x = 4;
    char a[] = "carecola";
    
    memcpy(a + 3, a, 5);
    printf("%s\n", a + 3);
    memmove(a + 3, a, 5);
    printf("%s\n", a + 3);
    
    return(0);
}