/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:12:23 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/18 16:55:16 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    while (i < n)
    {
         ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
         i++;
    }
    SIN ACABAR
    return(dest);
}

int main(void)
{
    size_t x = 4;
    char a[] = "carecola";
    char b[] = "hola";
    
    ft_memset(a, b, x);
    printf("%s", a);
    return(0);
}