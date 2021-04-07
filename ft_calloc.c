/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:33:34 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:24:38 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*arry;

	arry = s;
	i = 0;
	while (i < n)
	{
		arry[i] = 48;
		i++;
	}
	arry[i] = '\0';
	return (arry);
}

void			*ft_calloc(size_t count, size_t size)
{
	void *p;

	p = malloc(size * count);
	if (p == 0)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
