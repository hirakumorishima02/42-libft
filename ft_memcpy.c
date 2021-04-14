/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:37:44 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 09:26:46 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d_arry;
	const unsigned char	*s_arry;

	d_arry = (unsigned char *)dst;
	s_arry = (unsigned char *)src;
	if (n == 0 || d_arry == s_arry)
		return (dst);
	i = 0;
	while (i < n)
	{
		d_arry[i] = s_arry[i];
		i++;
	}
	return (dst);
}
