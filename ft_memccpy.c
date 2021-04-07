/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:59:00 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:27:36 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (s_arry[i] == (const unsigned char)c)
			break ;
		i++;
	}
	d_arry[i + 1] = '\0';
	return (dst);
}
