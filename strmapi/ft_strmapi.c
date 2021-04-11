/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:36:30 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 06:56:38 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char f(unsigned int i, char c)
{
	printf("%c\n", c);
	return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		f(i, *s++);
	}
	return ((char *)s);
}

int main()
{
	char s[] = "abcdef";
	ft_strmapi(s, &f);
}

/*
** 関数 「f」 を文字列's'の各文字に適用して、
** 「f」 を連続して適用した結果の新しい文字列 (malloc (3) を使用) を作成します。
*/