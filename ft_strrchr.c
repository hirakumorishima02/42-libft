/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:25:51 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:36:03 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = NULL;
	if (s != NULL)
	{
		while (*s)
		{
			if (*s == (char)c)
				p = s;
			s++;
		}
	}
	return ((char *)p);
}
