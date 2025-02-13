/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:19:23 by jcarlos2          #+#    #+#             */
/*   Updated: 2024/09/22 15:17:43 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	while (x > 0 && y > 0 && l < y)
	{
		c = 0;
		while (c < x)
		{
			if (l == 0 && c == 0)
				ft_putchar('A');
			else if (l == y - 1 && c == x - 1 && y != 1 && c > 0)
				ft_putchar('A');
			else if
			((c == 0 && l == y - 1) || (c == x - 1 && l == 0))
				ft_putchar('C');
			else if (l > 0 && l != y - 1 && c > 0 && c != x - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c ++;
		}
		ft_putchar('\n');
		l ++;
	}
}
