/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlos2 <jcarlos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:19:23 by jcarlos2          #+#    #+#             */
/*   Updated: 2024/09/22 10:03:13 by jcarlos2         ###   ########.fr       */
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
			if ((l == 0 && c == 0) || (l == y - 1 && c == 0))
				ft_putchar('A');
			else if
			(x > 1 && ((l == 0 && c == x - 1) || (l == y - 1 && c == x - 1)))
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
