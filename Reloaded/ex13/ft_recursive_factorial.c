/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:53:49 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 14:43:23 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	if (nb > 1)
		res *= nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(-50));
// }
