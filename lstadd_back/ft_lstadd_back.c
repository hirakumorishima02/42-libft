/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:33:41 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/13 06:01:51 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

int main(void)
{
	t_list *l =  NULL;
	l =  ft_lstnew((void*)1);
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	printf("%p\n", l);
	return (0);
}