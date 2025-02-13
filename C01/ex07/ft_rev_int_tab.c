/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:22:10 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/24 15:57:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

// int	main(void)
// {
// 	int	array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
// 	int	l;

// 	l = 0;
// 	ft_rev_int_tab(array, 10);
// 	while (l < 10)
// 	{
// 		printf("%d ", array[l]);
// 		l++;
// 	}
// 	return (0);
// }
