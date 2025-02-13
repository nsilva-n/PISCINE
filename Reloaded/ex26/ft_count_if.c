/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:19:08 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/22 16:52:09 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// int	ft_str_is_alpha(char *str)
// {
// 	int	result;
// 	int	i;

// 	i = 0;
// 	result = 1;
// 	while (str[i] != '\0' && result == 1)
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			result = 1;
// 		else if (str[i] >= 'A' && str[i] <= 'Z')
// 			result = 1;
// 		else
// 			result = 0;
// 		i++;
// 	}
// 	return (result);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (tab[++i] != NULL)
	{
		if (f(tab[i]) == 1)
			count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char **c;

// 	c[0] = "abc";
// 	c[1] = "def";
// 	c[2] = "123";
// 	c[3] = "Lawl";
// 	c[4] = "1a4";

// 	printf("%d", ft_count_if(c, &ft_str_is_alpha));
// }