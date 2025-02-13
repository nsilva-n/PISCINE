/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:01:41 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/08 10:22:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;

	i = -1;
	if (par != NULL)
	{
		while (par[++i].str)
		{
			ft_putstr(par[i].str);
			ft_putchar('\n');
			ft_putnbr(par[i].size);
			ft_putchar('\n');
			ft_putstr(par[i].copy);
			ft_putchar('\n');
		}
	}
}

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*res;

// 	res = ft_strs_to_tab(argc, argv);
// 	ft_show_tab(res);
// 	return(0);
// }