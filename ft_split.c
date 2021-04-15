/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:08:36 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/15 09:33:14 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	cmp(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static void	ft_strcpy(char *box, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		box[i] = src[i];
		i++;
	}
	box[i] = '\0';
}

static char	**memory_allocate(const char *str, char charset)
{
	size_t	i;
	int		len;

	if (!str)
		return (NULL);
	i = 0;
	len = 0;
	while (i <= ft_strlen(str))
	{
		if (cmp(str[i], charset) || str[i] == '\0')
		{
			if (i != 0 && !cmp(str[i - 1], charset))
				len++;
		}
		i++;
	}
	return ((char **)malloc(sizeof(char *) * (len + 1)));
}

char	**ft_split(char const *s, char c)
{
	char		**box;
	size_t		len;
	size_t		i;
	size_t		j;

	box = memory_allocate(s, c);
	if (!box)
		return (NULL);
	i = -1;
	j = 0;
	len = 0;
	while (++i <= ft_strlen(s))
	{
		if ((cmp(s[i], c) || s[i] == '\0') && (len > 0 && !cmp(s[i - 1], c)))
		{
			box[j] = (char *)malloc(len + 1);
			ft_strcpy(box[j], (char *)&s[i - len], len);
			j++;
			len = 0;
		}
		else if (!cmp(s[i], c))
			len++;
	}
	box[j] = 0;
	return (box);
}
