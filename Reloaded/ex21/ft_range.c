/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:08:49 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 13:20:40 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	max;
// 	int	min;

// 	max = 2;
// 	min = 2;
// 	range = ft_range(min, max);
// 	i = -1;
// 	while (++i < max - min)
// 		printf("%d\n", range[i]);
// 	free(range);
// }
