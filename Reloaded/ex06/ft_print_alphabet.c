/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:27:51 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 12:54:53 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_print_alphabet(void)
{
	int	i;

	i = -1;
	while (++i < 26)
		ft_putchar('a' + i);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }