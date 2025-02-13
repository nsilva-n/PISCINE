/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:28:03 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/29 18:46:16 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int	ft_recursive_power(int nb, int power)
{
	unsigned int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
		result *= nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// int main(void)
// {
// 	printf("%d", ft_recursive_power(3, 3));
// }