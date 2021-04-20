/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:31:01 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/20 10:02:18 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*arry;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	arry = (char *)malloc(sizeof(char) * (len + 1));
	if (!arry)
		return (NULL);
	i = 0;
	while (i < len && i + start < s_len)
	{
		arry[i] = s[start + i];
		i++;
	}
	arry[i] = '\0';
	return (arry);
}
