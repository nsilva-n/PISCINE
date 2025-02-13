/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:49:46 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/02 12:49:11 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}
// int main()
// {
// 	int	i;
// 	int	max = 90;
// 	int	min = 80;
// 	int	*result = ft_range(min, max);

// 	i = -1;
// 	if (result != NULL)
// 	{
// 		while (++i < max - min)
// 			printf("%d ", result[i]);
// 	}
// 	free(result);
// }
