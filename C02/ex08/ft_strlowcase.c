/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:15:17 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 13:55:28 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
// int main (void)
// {
// 	char c[] = "Ate m'Embebedar";
// 	char d[] = "Tara Perdida";

// 	printf("c is currently:                 %s\n", c);
// 	printf("d is currently:                 %s\n", d);
// 	printf("Output of c with ft_strlowcase: %s\n", ft_strlowcase(c));
// 	printf("Output of c with ft_strlowcase: %s\n", ft_strlowcase(d));
// }