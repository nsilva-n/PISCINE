/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:07:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 13:52:20 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	size_t	i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = 1;
		else
			result = 0;
		i++;
	}
	return (result);
}
// int main (void)
// {
// 	char	c[] = "";
// 	printf("%d", ft_str_is_numeric(&c));
// }