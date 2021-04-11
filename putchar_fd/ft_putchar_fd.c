/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:58:54 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 07:14:51 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

int main()
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	ft_putchar_fd('a', fd);
	close(fd);
}

/*
**  与えられたファイルディスクリプタにstring's'を出力する
*/