/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 06:41:32 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 06:16:09 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
		i++;
	}
	return (NULL);
}
