/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:30:52 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/29 18:56:25 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i != nb)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if (i == nb)
			return (nb);
		nb++;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d", ft_find_next_prime(3));
// }