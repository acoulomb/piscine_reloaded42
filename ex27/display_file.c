/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:09:59 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/04 15:51:24 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUF_SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_check_argc(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
		return (0);
}

void	ft_clean_buf(char *str)
{
	int nb;

	nb = 0;
	while (nb < (BUF_SIZE + 1))
		str[nb++] = '\0';
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_check_argc(argc) == 1)
		return (1);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (1);
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
			ft_putstr(buf);
			ft_clean_buf(buf);
		}
		if (ret == 0)
			ft_putstr(buf);
		else
			return (1);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
