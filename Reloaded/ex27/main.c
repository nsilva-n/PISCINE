/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:03:53 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/10/23 15:47:05 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int	ft_display_file(char *str)
{
	int		fd;
	char	c;
	int		i;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	i = read(fd, &c, 1);
	while (i > 0)
	{
		if (i == -1)
			return (0);
		ft_putchar(c);
		i = read(fd, &c, 1);
	}
	close(fd);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		if (ft_display_file(av[1]) == 0)
			ft_putstr("Cannot read file.\n");
	}
}
