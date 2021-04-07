/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 07:53:46 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:33:34 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	cul_size(char *array)
{
	size_t length;

	length = 0;
	while (array[length] != '\0')
		length++;
	return (length);
}

size_t			ft_strlcat(char *dest, char *src, size_t size)
{
	size_t d_size;
	size_t s_size;
	size_t i;

	d_size = cul_size(dest);
	s_size = cul_size(src);
	if (d_size >= size)
		return (s_size + size);
	i = 0;
	while ((d_size + i < size - 1) && src[i] != '\0')
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (d_size + s_size);
}
