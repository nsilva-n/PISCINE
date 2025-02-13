/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:41:11 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/07 20:16:48 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ig_spaces(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = ig_spaces(str);
	result = 0;
	sign = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		return (-result);
	else
		return (result);
}

// int main(void)
// {
// 	char str[1234] = " ---+--+1234ab567";

// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", ft_atoi("2024"));
// 	printf("%d\n", ft_atoi("asdf"));
// 	printf("%d\n", ft_atoi("asd2f"));
// 	printf("%d\n", ft_atoi("asd124f"));
// 	printf("%d\n", ft_atoi("14.asdf"));
// 	printf("%d\n", ft_atoi("-253asdf"));
// 	printf("%d\n", ft_atoi(" 	asdf"));
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// }