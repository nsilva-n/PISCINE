/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:57:33 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 10:27:34 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char src[19] = "do Pai Tomas";
// 	char dest[19] = "Cabana ";
// 	char src2[19] = "do Pai Tomas";
// 	char dest2[19] = "Cabana ";

// 	printf("Output with ft_strcat: %s\n", ft_strcat(dest, src));
// 	printf("Output with strcat: %s\n", strcat(dest2, src2));
// }