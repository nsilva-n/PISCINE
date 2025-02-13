/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:11:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/27 12:50:09 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char src[100] = "A minha geracao";
// 	char dest[100] = "UHF";
// 	char src2[100] = "A minha geracao";
// 	char dest2[100] = "UHF";
// 	unsigned int	j;

// 	j = 1;
// 	while (j < 20)
// 	{
// 		printf("When j is %d\n", j);
// 		printf("Output with ft_strncpy: %s\n", ft_strncpy(dest, src, j));
// 		printf("Output with    strncpy: %s\n", strncpy(dest2, src2, j));
// 		j++;
// 	}
// }