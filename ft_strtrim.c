/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 06:01:28 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/28 08:58:00 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char const *s1, char const *set, int dir)
{
	int	i;
	int	j;
	int	flag;

	if (dir > 0)
		i = 0;
	else
		i = ft_strlen(s1) - 1;
	while (i >= 0 && s1[i])
	{
		flag = 0;
		j = -1;
		while (set[++j])
		{
			if (s1[i] == set[j])
				flag = 1;
		}
		if (!flag)
			return (i);
		i += dir;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	int		len;
	char	*arry;

	if (!s1 || !set)
		return (NULL);
	arry = 0;
	front = search(s1, set, 1);
	back = search(s1, set, -1);
	len = back - front + 1;
	if (len <= 0)
		return (ft_strdup(""));
	arry = ft_substr(s1, front, len);
	if (!arry)
		return (NULL);
	return (arry);
}
