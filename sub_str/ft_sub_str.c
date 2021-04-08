/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:31:01 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 11:29:11 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *arry;

	if(start > ft_strlen(s))
		return (NULL);
	arry = (char *)malloc(len);
	if(!arry)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		arry[i] = s[start-1];
		i++;
		start++;
	}
	arry[i] = '\0';
	return (arry);
}

int	main()
{
	char str[] = "ABCDEFG";
	char *tmp;

	tmp = ft_substr(str, 100, 10000);
	printf("%s\n", tmp);
	free(tmp);
	return (0);
}

/*
** malloc (3) を使用して を割り当て、文字列のから部分文字列を返します。
** 部分文字列はインデックス 「start」 から始まり、最大サイズ 「len」 です
*/