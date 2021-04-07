/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:05:42 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:22:37 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
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
