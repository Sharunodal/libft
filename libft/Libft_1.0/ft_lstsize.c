/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:20:47 by arissane          #+#    #+#             */
/*   Updated: 2024/05/03 10:48:52 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}

int	main(void)
{
	t_list	*lst;
	lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	printf("%d", ft_lstsize(lst));
	return (0);
}
