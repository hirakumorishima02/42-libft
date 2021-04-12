/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:21:02 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 09:42:35 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elm;

	elm = (t_list *)malloc(sizeof(*elm));
	if (!elm)
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}

int main()
{
	t_list *test = ft_lstnew("aaa");
	printf("%s\n", test->content);
	printf("%p\n", test->next);
}

/*
** (malloc (3) を使用して) を割り当て、新しい要素を返します。
** 変数 「content」 が初期化されます。
** パラメータ 「content」 の値を使用します。変数 「next」 はNULLに初期化されます。
*/ 