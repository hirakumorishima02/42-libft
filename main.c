/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:53:39 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/08 07:49:01 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int main()
{
	char dest[] = "ABCDE";
	char src[] = "FGFIJ";
	ft_strlcat(dest,src,9);
	printf("%s", dest);
	return (0);
}
