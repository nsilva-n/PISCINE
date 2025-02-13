/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:28:42 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/29 18:45:42 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// int main (void)
// {
// 	printf("%d", ft_iterative_factorial(10));
// }