/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:31:46 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 11:13:29 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
// 	char src[1000] = "do Pai Tomas";
// 	char dest[1000] = "Cabana ";
// 	char src2[1000] = "do Pai Tomas";
// 	char dest2[1000] = "Cabana ";
// 	unsigned int	l;

// 	l = 0;
// 	while (l < 50)
// 	{
// 		printf("When l is %d\n", l);
// 		printf("Output with ft_strncat: %s\n", ft_strncat(dest, src, l));
// 		printf("Output with    strncat: %s\n", strncat(dest2, src2, l));
// 		l++;
// 	}
// }
