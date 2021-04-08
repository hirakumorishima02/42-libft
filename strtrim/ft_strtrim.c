/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 06:01:28 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/09 08:04:42 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	search(char const *s1, char const *set, int dir)
{
	int i;
	int j;
	int flag;

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

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int front;
	int back;
	char *arry;
	
	front = search(s1, set, 1);
	back = search(s1, set, -1);
	ft_strlcpy(arry, (char *)s1 + front, back - front + 2);
	return (arry);
}

int main()
{
	char s1[] = "ABCabcdcabBAC";
	char set[] = "ABC";
	printf("%s", ft_strtrim(s1, set));
}
/*
**(malloc (3) を使用して) を割り当て、
**文字列の先頭と末尾から 「set」 で指定された文字を削除した 「s 1」 のXコピーを返します。
*/