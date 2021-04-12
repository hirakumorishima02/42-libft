/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:55:26 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 12:44:24 by hmorishi         ###   ########.fr       */
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

t_list	*ft_lstnew(void *content)
{
	t_list *elm;

	elm = (t_list *)malloc(sizeof(elm));
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

int ft_lstsize(t_list *lst)
{
	int cnt;

	cnt = 0;
	while (lst)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}

#ifdef TEST

int main(void)
{
	t_list *lst =  NULL;
	ft_lstadd_front(&lst, ft_lstnew((void*)1));
	printf("%p\n", lst);
	ft_lstadd_front(&lst, ft_lstnew((void*)1));
	printf("%p\n", lst);
	ft_lstadd_front(&lst, ft_lstnew((void*)1));
	printf("%p\n", lst);

	printf("ft_lstlast:%p\n", ft_lstlast(lst));

	return (0);
}

#endif


