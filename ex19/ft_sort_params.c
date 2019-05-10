/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:23:47 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/03 21:25:14 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **c1, char **c2)
{
	char *temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
		j = 1;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
