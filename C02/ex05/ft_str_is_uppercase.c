/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:16:00 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/23 18:34:11 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	size_t	i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			result = 1;
		else
			result = 0;
		i++;
	}
	return (result);
}
// int main (void)
// {
// 	char	c[] = "CHICOFININHO";
// 	printf("%d", ft_str_is_uppercase(&c));
// }