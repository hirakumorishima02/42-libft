/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:42:15 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/15 07:58:58 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cul_len_digit(int n, int *digit, int *len)
{
	*digit = 1;
	*len = 2;
	if (n >= 0)
	{
		*len = 1;
		n = -n;
	}
	while (n / *digit < -9)
	{
		*digit *= 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	int		digit;
	int		len;
	int		i;
	char	*ret;

	cul_len_digit(n, &digit, &len);
	ret = (char *)malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		ret[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (digit > 0)
	{
		ret[i++] = -(n / digit % 10) + '0';
		digit /= 10;
	}
	ret[i] = '\0';
	return (ret);
}
