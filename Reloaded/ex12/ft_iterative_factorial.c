/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:53:21 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 14:22:37 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb + 1;
	if (nb > 0)
	{
		while (--i > 1)
			nb *= (i - 1);
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(-7));
// }