/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:48:39 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:35:42 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0' && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

static int		find_length(const char *array)
{
	int length;

	length = 0;
	while (array[length] != '\0')
		length++;
	return (length);
}

char			*ft_strnstr(const char *hystk, const char *ndl, size_t len)
{
	size_t f_len;
	size_t s_len;

	f_len = find_length(ndl);
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
	return (0);
}
