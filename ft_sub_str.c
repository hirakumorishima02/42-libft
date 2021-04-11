/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:31:01 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 08:35:21 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arry;

	if (start > ft_strlen(s))
		return (NULL);
	arry = (char *)malloc(len);
	if (!arry)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		arry[i] = s[start - 1];
		i++;
		start++;
	}
	arry[i] = '\0';
	return (arry);
}
