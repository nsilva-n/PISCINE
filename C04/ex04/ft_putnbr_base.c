/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:04:56 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/08 13:33:35 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp_minus(char *s1)
{
	int	i;
	int	j;
	int	result;

	result = 1;
	i = -1;
	while (s1[++i] != '\0')
	{
		j = i + 1;
		while (s1[j] != '\0')
		{
			if (s1[i] == s1[j])
				return (0);
			j++;
		}
	}
	i = -1;
	while (s1[++i] != '\0')
	{
		if (s1[i] == '+' || s1[i] == '-')
			return (0);
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	smallest(int nbr, char *base)
{
	int	i;

	i = ft_strlen(base);
	if (nbr <= -i)
	{
		smallest(nbr / i, base);
		smallest(nbr % i, base);
	}
	else
		ft_putchar(base[-nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = ft_strlen(base);
	if (i >= 2 && base != NULL && ft_strcmp_minus(base) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			smallest(nbr, base);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

// int main(void)
// {
// 	ft_putnbr_base(123456, "OLECAS");
// }
