/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:08:36 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/14 09:10:30 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	charcmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
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

static char	**memory_allocate(const char *str, char *charset)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (i <= ft_strlen(str))
	{
		if (charcmp(str[i], charset) || str[i] == '\0')
		{
			if (i != 0 && !charcmp(str[i - 1], charset))
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

	box = memory_allocate(s, &c);
	i = -1;
	j = 0;
	len = 0;
	while (++i <= ft_strlen(s))
	{
		if ((charcmp(s[i], &c) || s[i] == '\0')
			&& (len > 0 && !charcmp(s[i - 1], &c)))
		{
			box[j] = (char *)malloc(len + 1);
			ft_strcpy(box[j], (char *)&s[i - len], len);
			j++;
			len = 0;
		}
		else if (!charcmp(s[i], &c))
			len++;
	}
	box[j] = NULL;
	free(box);
	return (box);
}
