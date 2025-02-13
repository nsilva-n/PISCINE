/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:47:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/07 19:19:39 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	free_memory(int i, t_stock_str *allavs)
{
	while (--i >= 0)
		free(allavs[i].copy);
	free(allavs);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*allavs;

	if (av == NULL)
		return (NULL);
	allavs = malloc((ac + 1) * sizeof(t_stock_str));
	if (allavs == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		allavs[i].size = ft_strlen(av[i]);
		allavs[i].str = av[i];
		allavs[i].copy = ft_strdup(av[i]);
		if (allavs[i].copy == NULL)
			free_memory(i + 1, allavs);
	}
	allavs[ac].str = 0;
	return (allavs);
}

// int	main(int argc, char **argv)
// {
// 	int			i;
// 	t_stock_str	*res;

// 	i = -1;
// 	res = ft_strs_to_tab(argc, argv);
// 	if (res != NULL)
// 	{
// 		while (res[++i].str)
// 		{
// 			printf("AV %d:\n", i);
// 			printf("Size: %d\n", res[i].size);
// 			printf("String: %s\n", res[i].str);
// 			printf("Copy: %s\n\n", res[i].copy);
// 			free(res[i].copy);
// 		}
// 		free(res);
// 	}
// 	return (0);
// }
