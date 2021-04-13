/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 08:43:47 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/13 09:20:41 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnewone(void *content)
{
	t_list *elm;
	
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

void ft_print_result(t_list *elm)
{
	write(1, elm->content, strlen(elm->content));
	write(1, "\n", 1);
}

void f(void *content)
{
	content = "XXX";
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
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
	ft_lstiter(elm1, f);
	ft_print_result(elm1);
	ft_print_result(elm2);
	ft_print_result(elm3);
}


/**
** lstを繰り返させ、
** それぞれの要素に関数fを適用する
**/