/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 07:42:56 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/13 08:41:20 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	del(void *lst)
{
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del(*lst);
			*lst = tmp;
		}
	}
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	ft_print_result(t_list *elem)
{
	write(1, elem->content, strlen(elem->content));
}

int main()
{
	t_list *elm1 = ft_lstnewone("AAA");
	t_list *elm2 = ft_lstnewone("BBB");
	t_list *elm3 = ft_lstnewone("CCC");
	elm1->next = elm2;
	elm2->next = elm3;
	ft_print_result(elm1);
	ft_print_result(elm2);
	ft_print_result(elm3);
	ft_lstclear(&elm2, del);
	ft_print_result(elm1);
	ft_print_result(elm2);
	ft_print_result(elm3);
}

/**
** 指定した要素と後続要素の全てを削除してfree
** 最後にリストへのポインタをNULLに設定する
**/