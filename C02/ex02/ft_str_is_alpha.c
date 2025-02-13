/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:50:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 13:52:25 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		result;
	size_t	i;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result = 1;
		else
			result = 0;
		i++;
	}
	return (result);
}
// int main (void)
// {
// 	char	c[] = "1";
// 	printf("%d", ft_str_is_alpha(&c));
// }