/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:48:39 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 11:21:59 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hystk, const char *ndl, size_t len)
{
	size_t	n;
	size_t	i;

	n = strlen(ndl);
	i = 0;
	if (ndl[0] == '\0')
		return ((char *)hystk);
	while (hystk[i] && i < len)
	{
		if (hystk[i] == ndl[0])
		{
			if (ft_strncmp(&hystk[i], &ndl[0], n) == 0 && i + n <= len)
				return ((char *)&hystk[i]);
		}
		i++;
	}
	return (NULL);
}
