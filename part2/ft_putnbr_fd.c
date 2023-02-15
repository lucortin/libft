/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:11:13 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 16:13:26 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	r;

	if (nb == -2147483648)
		write (1, &"-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write (1, "-", 1);
		}
		if (n >= 10)
		{
			r = n % 10;
			n = n / 10;
			ft_putnbr_fd(n);
			ft_putchar_fd(r);
		}
		else
			ft_putchar_fd(n);;
	}
}

int	main(void)
{
	
	return (0)
}