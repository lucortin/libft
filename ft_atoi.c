/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucortin <lucortin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:50:06 by lucortin          #+#    #+#             */
/*   Updated: 2023/01/25 19:25:43 by lucortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	menos;

	i = 0;
	menos = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			menos *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * menos);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = " ---+--+1234ab567";
	printf("%d, ", ft_atoi(a));
   	char b[] = " ---+---+1234ab567";
    printf("%d, ", ft_atoi(b));
    char c[] = " ---+--+1-234ab567";
    printf("%d", ft_atoi(c));
	return (0);
}*/
