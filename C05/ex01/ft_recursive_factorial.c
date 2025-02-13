/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:45:03 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/29 18:45:48 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		result *= nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int main (void)
// {
// 	printf("%d", ft_recursive_factorial(3));
// }
