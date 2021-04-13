/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorishi <hmorishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:44:19 by hmorishi          #+#    #+#             */
/*   Updated: 2021/04/12 15:53:38 by hmorishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/**
** **list => リストの先頭アドレス
** *new => newのアドレス
**	new->next = *list;// nextに1つ手前の要素のnextを入れる
**	*list = new;//1つ手前の要素のnextにnewのアドレスを入れる
**/

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *elm;

// 	elm = (t_list *)malloc(sizeof(*elm));
// 	if (!elm)
// 		return (NULL);
// 	elm->content = content;
// 	elm->next = NULL;
// 	return (elm);
// }

// int main(void)
// {
// 	t_list * l =  NULL;
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	printf("%p\n", &l[0]);
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	printf("%p\n", &l[0]);
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	printf("%p\n", &l[0]);
// 	for(int i = 0 ; i < 3; i++)
// 	{
// 		printf("printf:%p\n", &l[i]);
// 	}
// 	return (0);
// }

// 1680
// 1696
// 2672
// 2688
// 2704
