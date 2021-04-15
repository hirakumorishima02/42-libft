/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:33:41 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/15 09:14:16 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l_elm;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	l_elm = ft_lstlast(*lst);
	l_elm->next = new;
}
