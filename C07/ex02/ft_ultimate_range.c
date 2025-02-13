/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:43:09 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/02 12:53:48 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*j;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = (int *) malloc((max - min) * sizeof(int));
	if (j == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		j[i] = min + i;
	*range = j;
	return (max - min);
}

// int main()
// {
// 	int	i;
// 	int	max = 1;
// 	int	min = 1;
// 	int	*range;
// 	int	result = ft_ultimate_range(&range, min, max);

// 	i = -1;
// 	if (result != 0)
// 		printf("%d", result);
// 	free(range);
// }