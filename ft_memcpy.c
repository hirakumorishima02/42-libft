/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:37:44 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:30:32 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d_arry;
	const unsigned char	*s_arry;

	d_arry = dst;
	s_arry = src;
	i = 0;
	while (i < n)
	{
		d_arry[i] = s_arry[i];
		i++;
	}
	return (dst);
}
