/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 07:35:48 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 06:18:11 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*m1;
	const unsigned char	*m2;

	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*m1 != *m2)
		{
			return ((int)(*m1 - *m2));
		}
		m1++;
		m2++;
		i++;
	}
	return (0);
}
