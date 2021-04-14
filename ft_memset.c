/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:47:36 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 06:05:05 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*arry;

	arry = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		arry[i] = (unsigned char)c;
		i++;
	}
	return (arry);
}
