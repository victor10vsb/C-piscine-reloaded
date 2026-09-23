/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:11:43 by vicsanch          #+#    #+#             */
/*   Updated: 2026/09/23 19:32:45 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	buf[1024];

	if (argc == 1)
		ft_putstr_err("File name missing.");
	else if (argc > 2)
		ft_putstr_err("Too many arguments.");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr_err("Cannot read file.");
		else
		{
			size = read(fd, buf, 1024);
			while (size > 0)
			{
				write(1, buf, size);
				size = read(fd, buf, 1024);
			}
			close(fd);
		}
	}
	return (0);
}
