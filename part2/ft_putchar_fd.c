/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:19:39 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:40:57 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// #define STD_OUTPUT 1
// #define STD_ERROR 2

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd ('a', STD_OUTPUT);
// 	ft_putchar_fd ('b', STD_ERROR);
// 	return (0);
// }