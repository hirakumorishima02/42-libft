/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:59:00 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 06:09:33 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d_arry;
	const unsigned char	*s_arry;

	d_arry = (unsigned char *)dst;
	s_arry = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_arry[i] = s_arry[i];
		if (s_arry[i] == (const unsigned char)c)
			break ;
		i++;
	}
	return (dst);
}
