/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:47:13 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 13:54:44 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char c[] = "Classe de 79";
// 	char d[] = "Eu tenho um POBRE";

// 	printf("c is currently:                %s\n", c);
// 	printf("d is currently:                %s\n", d);
// 	printf("Output of c with ft_strupcase: %s\n", ft_strupcase(c));
// 	printf("Output of c with ft_strupcase: %s\n", ft_strupcase(d));
// }