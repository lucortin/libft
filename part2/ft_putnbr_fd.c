/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:11:13 by lucortin          #+#    #+#             */
/*   Updated: 2023/02/15 17:13:49 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (1, &"-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write (1, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}

// int	main(void)
// {
// ft_putnbr_fd(20, 1);
// ft_putnbr_fd(9, 1);
// ft_putnbr_fd(464684, 1);
// ft_putnbr_fd(-2147483648, 1);
// return (0);
// }