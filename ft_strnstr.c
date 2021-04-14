/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:48:39 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 06:47:06 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hystk, const char *ndl, size_t len)
{
	size_t	f_len;
	size_t	s_len;

	f_len = ft_strlen(ndl);
	s_len = 0;
	if (ndl[0] == '\0')
		return ((char *)hystk);
	while (hystk[s_len] != '\0' && s_len < len)
	{
		if (hystk[s_len] == ndl[0])
		{
			if (ft_strncmp(&hystk[s_len], &ndl[0], f_len) == 0)
				return ((char *)&hystk[s_len]);
		}
		s_len++;
	}
	return (NULL);
}
