/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:47:02 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 07:19:41 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	s1_len;
	size_t	s2_len;
	char	*rep;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = s1_len + s2_len;
	rep = (char *)malloc(sizeof(char) * (len + 1));
	if (!rep)
		return (NULL);
	ft_strlcpy(rep, (char *)s1, s1_len);
	ft_strlcpy(&rep[s1_len], (char *)s2, s2_len);
	return (rep);
}
