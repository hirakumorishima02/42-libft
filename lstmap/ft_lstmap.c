/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:26:33 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/13 11:26:02 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
	return ;
}
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

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

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if(!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *l_elm;

	if (lst)
	{
		l_elm = ft_lstlast(*lst);
		l_elm->next = new;
	}
	else
		*lst = new;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new;
	t_list	*elm;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		elm = ft_lstnew((*f)(lst->content));
		if (!elm)
		{
			ft_lstclear(&elm, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elm);		
		lst = lst->next;
	}
	return (new);
}

void	ft_print_result(t_list *elm)
{
	write(1, elm->content, strlen(elm->content));
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elm;
	elm = (t_list *)malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	if (!content)
		elm->content = NULL;
	else
		elm->content = content;
	elm->next = NULL;
	return (elm);
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
	ft_lstmap(elm1, (void *)ft_lstadd_back, (void *)ft_lstadd_back);
}

/**
** 指定した要素と後続要素の全てを削除してfree
** 最後にリストへのポインタをNULLに設定する
**/
