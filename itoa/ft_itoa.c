/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:42:15 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 06:30:12 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	cul_len_digit(int n, int *digit, int *len)
{
	*digit = 1;
	*len = 0;
	if (n <= 0)
	{
		*len = 1;
		n = -n;
	}
	while (n / *digit > 9)
	{
		*digit *= 10;
		*len += 1;
	}
}

char *ft_itoa(int n)
{
	int digit;
	int len;
	int i;
	char *rep;

	cul_len_digit(n, &digit, &len);
	rep = (char *)malloc(sizeof(*rep) * (len + 1));
	i = 0;
	if (n < 0)
	{
		rep[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (digit > 0)
	{
		rep[i++] = -(n / digit % 10) + '0';
		digit /= 10;
	}
	rep[i] = '\0';
	return (rep);
}

int main()
{
	printf("%s", ft_itoa(-12345));
	return (0);
}

/*
** (malloc (3) で) を割り当て、文字列を返します。
** 引数として受け取った整数を表します。
** 負の数は処理する必要があります
*/