/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 06:01:28 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 07:21:18 by hmorishi         ###   ########.fr       */
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
	char	*arry;

	arry = 0;
	front = search(s1, set, 1);
	back = search(s1, set, -1);
	ft_strlcpy(arry, (char *)s1 + front, back - front + 2);
	return (arry);
}
