/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:47:02 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 08:36:34 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	s1_len;
	size_t	s2_len;
	char	*rep;

	s1_len = ft_strlen(s1) + 1;
	s2_len = ft_strlen(s2) + 1;
	len = s1_len + s2_len + 1;
	rep = (char *)malloc(len);
	ft_strlcpy(rep, (char *)s1, s1_len);
	ft_strlcpy(&rep[s1_len - 1], (char *)s2, s2_len);
	return (rep);
}
