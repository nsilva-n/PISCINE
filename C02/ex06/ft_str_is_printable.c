/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:23:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 13:56:07 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_str_is_printable(char *str)
{
	size_t	i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result == 1)
	{
		if (str[i] >= ' ')
			result = 1;
		else
			result = 0;
		i++;
	}
	return (result);
}
// int main (void)
// {
// 	char *c = 'E';
// 	char *d = '\t';

// 	printf("c is currently:                       %s\n", &c);
// 	printf("d is currently is:                    %s\n", &d);
// 	printf("c with ft_str_is_printable: %d\n", ft_str_is_printable(&c));
// 	printf("c with isprint:             %d\n", isprint(c));
// 	printf("d with ft_str_is_printable: %d\n", ft_str_is_printable(&d));
// 	printf("d with    str_is_printable: %d\n", isprint(d));
// }
