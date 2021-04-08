/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:47:02 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 11:45:14 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../ft_strlcpy.c"
#include "../ft_strlen.c"
#include "../libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int i;

	count = 0;
	while (dest[count] != '\0')
		count++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t s1_len = ft_strlen(s1) + 1;
	size_t s2_len = ft_strlen(s2) + 1;
	char *rep;

	len = s1_len + s2_len + 1;
	rep = (char *)malloc(len);
	ft_strlcpy(rep, (char *)s1, s1_len);
	ft_strlcpy(&rep[s1_len - 1], (char *)s2, s2_len);
	return (rep);
}

int main()
{
	char s1[] = "ABCDEFG";
	char s2[] = "HIJKLMNOP";
	printf("%s\n", ft_strjoin(s1, s2)); 
	return (0); 
}

/*
** (malloc (3) を使用して) を割り当て、
**「s 1」 と 「s 2」 を連結した結果である新しい文字列を返します。
*/