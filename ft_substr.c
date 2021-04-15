/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:31:01 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 07:14:21 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arry;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	arry = (char *)malloc(sizeof(char) * (len + 1));
	if (!arry)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		arry[i] = s[start + i];
		i++;
	}
	arry[i] = '\0';
	return (arry);
}
