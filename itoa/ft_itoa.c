/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:42:15 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/09 09:24:31 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int cul_digit(int n)
{
	int digit;

	digit = 1;
	while (n >= 10)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char *ft_itoa(int n)
{
	int digit;
	int tmp;
	int i;
	char rep;

	digit = cul_digit(n);
	rep = (char *)malloc(sizeof(char) * digit + 1);
	tmp = n;
	i = 0;
	while (digit)
	{
		rep[i] = tmp % 10 + '0';
		tmp /= 10;
		digit--;
		i++;
	}
	rep[i] = '\0';
	return (rep);
}

int main()
{
	printf("%s", ft_itoa(12345));
	return (0);
}


/*
** (malloc (3) で) を割り当て、文字列を返します。
** 引数として受け取った整数を表します。
** 負の数は処理する必要があります
*/