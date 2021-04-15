/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:35:21 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/15 09:13:23 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip(const char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	result = 0;
	i = ft_skip(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > 922337203685477580)
		{
			if (sign == 1)
				return (-1);
			else if (sign == -1)
				return (0);
		}
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
