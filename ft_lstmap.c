/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:44:03 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/11 18:09:11 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		ft_lstadd_back(&node, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (node);
}
