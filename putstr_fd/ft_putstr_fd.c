/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 07:37:40 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 07:42:07 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);	
}

int main()
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	char s[] = "ABCDEF";
	ft_putstr_fd(s, fd);
	close(fd);
}