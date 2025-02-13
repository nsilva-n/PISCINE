/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:12:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 10:27:29 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// int	main(void)
// {
// 	char c1[] = "Rua do Carmo";
// 	char c2[] = "Rua do Carmo - UHF";
// 	char c3[] = "Rua do Carmo";
// 	char c4[] = "Rua do Carmo - UHF";
// 	printf("Output with ft_strcmp: %d\n", ft_strcmp(c1, c2));
// 	printf("Output with strcmp: %d\n", strcmp(c1, c2));
// }