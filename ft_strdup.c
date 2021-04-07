/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:53:56 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:33:23 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char		*ft_strcpy(char *dest, const char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		dest[i++] = src[c++];
	dest[i] = '\0';
	return (dest);
}

char			*ft_strdup(const char *src)
{
	char *dest;

	if (src == NULL)
		return (0);
	dest = (char*)malloc(ft_strlen(src) + 1);
	if (dest)
		ft_strcpy(dest, src);
	return ((char *)dest);
}
