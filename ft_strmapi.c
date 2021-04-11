/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:36:30 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 08:28:53 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		f(i, *s++);
	}
	return ((char *)s);
}
