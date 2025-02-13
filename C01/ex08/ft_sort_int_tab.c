/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:33 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/24 16:16:14 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		temp = tab[min];
		tab[min] = tab[i];
		tab[i] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	array[10] = {1, 2, 90, 4, 5, 6, -7, 8, 9, 0};
// 	int	l;

// 	l = 0;
// 	ft_sort_int_tab(array, 10);
// 	while (l < 10)
// 	{
// 		printf("%d ", array[l]);
// 		l++;
// 	}
// 	return (0);
// }