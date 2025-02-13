/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:38:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/09/26 10:27:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
// int	main(void)
// {
// 	char str[] = "OLa Lisboa, pela primeira vez";
// 	char to_find[] = "Lisboa";
// 	char str2[] = "OLa Lisboa, pela primeira vez";
// 	char to_find2[] = "Lisboa";

// 	printf("Output with ft_strstr: %s\n", ft_strstr(str, to_find));
// 	printf("Output with strstr: %s\n", strstr(str2, to_find2));
// }