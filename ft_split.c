/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:08:36 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/22 14:02:38 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **box, int i)
{
	while (i--)
		free(box[i]);
	free(box);
	return (0);
}

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

static char	**memory_allocate(const char *str, char charset, size_t *length)
{
	size_t	i;
	size_t	s_len;
	int		len;

	*length = 0;
	if (!str)
		return (NULL);
	i = 0;
	len = 0;
	s_len = ft_strlen(str);
	while (i <= s_len)
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

	box = memory_allocate(s, c, &len);
	if (!box)
		return (NULL);
	i = -1;
	j = 0;
	while (++i <= ft_strlen(s))
	{
		if ((cmp(s[i], c) || s[i] == '\0') && (len > 0 && !cmp(s[i - 1], c)))
		{
			box[j] = (char *)malloc(len + 1);
			if (!box[j])
				return (ft_free(&box[j], i));
			ft_strcpy(box[j++], (char *)&s[i - len], len);
			len = 0;
		}
		else if (!cmp(s[i], c))
			len++;
	}
	box[j] = NULL;
	return (box);
}
