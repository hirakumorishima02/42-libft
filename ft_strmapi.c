/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:36:30 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 09:17:39 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*p;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		p[i] = f(i, *s++);
		i++;
	}
	p[i] = '\0';
	return (p);
}
