/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:51:30 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 11:40:30 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char c1[] = "Rua do_ Carmo -UHF1";
// 	char c2[] = "Rua do Carmo - UHF";
// 	char c3[] = "Rua do_ Carmo -UHF1";
// 	char c4[] = "Rua do Carmo - UHF";
// 	unsigned int	j;

// 	j = 0;
// 	while (j < 20)
// 	{
// 		printf("Output with ft_strncmp: %d\n", ft_strncmp(c1, c2, j));
// 		printf("Output with strncmp: %d\n", strncmp(c3, c4, j));
// 		j++;
// 	}
// }