/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:08 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 16:19:02 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nbr)
// {
// 	if (nbr == -2147483648)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		ft_putnbr(147483648);
// 	}
// 	else if (nbr < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(-nbr);
// 	}
// 	else if (nbr > 9)
// 	{
// 		ft_putnbr(nbr / 10);
// 		ft_putnbr(nbr % 10);
// 	}
// 	else
// 		ft_putchar(nbr + '0');
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5, 6};
// 	ft_foreach(tab, 6, &ft_putnbr);
// }