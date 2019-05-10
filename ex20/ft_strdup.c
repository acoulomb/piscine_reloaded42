/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:36:39 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/03 21:49:28 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	if (!(dup = (char*)malloc(sizeof(*dup) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[size] = '\0';
	return (dup);
}
