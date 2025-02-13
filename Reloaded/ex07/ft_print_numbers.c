/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:31:31 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/21 19:25:05 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_print_numbers(void)
{
	int	i;

	i = -1;
	while (++i < 10)
		ft_putchar('0' + i);
}

// int	main(void)
// {
// 	ft_print_numbers();
// }