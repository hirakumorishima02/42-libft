/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 06:01:28 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/16 07:20:14 by hmorishi         ###   ########.fr       */
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
	while (s1[i] && i >= 0)
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
		return ("");
	arry = ft_substr(s1, front, len);
	if (!arry)
		return (NULL);
	return (arry);
}
