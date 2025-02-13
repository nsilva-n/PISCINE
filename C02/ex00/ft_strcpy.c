/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:08:18 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/27 12:47:32 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char src[100] = "Xutos";
// 	char dest[100] = "Submissao";
// 	char src2[100] = "Xutos";
// 	char dest2[100] = "Submissao";

// 	printf("dest is currently:     %s\n", dest);
// 	printf("dest2 is currently   : %s\n", dest2);
// 	printf("Output with ft_strcpy: %s\n", ft_strcpy(dest, src));
// 	printf("Output with    strcpy: %s\n", strcpy(dest2, src2));
// }