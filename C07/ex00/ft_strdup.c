/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:25:35 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/02 11:13:43 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc((sizeof(char) * i) + 1);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	if (dest == NULL)
		return (0);
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "12345";
// 	void*	dest = ft_strdup(src);

// 	char	src2[] = "1234";
// 	void* 	dest2 = strdup(src2);

// 	printf("%s\n", dest);
// 	printf("%s\n", dest2);

// 	free(dest2);
// 	free(dest);
// }