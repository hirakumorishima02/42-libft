/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:41:04 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 10:53:15 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_lstsize(t_list *lst)
{
	int cnt;

	cnt = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list * l =  NULL;
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)1));

	printf("%d\n", ft_lstsize(l));

	return (0);
}
