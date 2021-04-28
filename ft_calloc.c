/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:33:34 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/26 13:53:10 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	res;

	if (count * size > LONG_MAX)
		return (NULL);
	if (!count || !size)
		res = 1;
	else
	{
		res = size * count;
	}
	p = malloc(res);
	if (!p)
		return (NULL);
	ft_bzero(p, res);
	return (p);
}
