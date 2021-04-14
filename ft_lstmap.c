/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:26:33 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/13 11:28:17 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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
