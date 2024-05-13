/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:58:57 by arissane          #+#    #+#             */
/*   Updated: 2024/05/07 13:25:47 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list *lst = NULL;
    t_list *string1 = ft_lstnew("string1");
    t_list *string2 = ft_lstnew("string2");
    t_list *string3 = ft_lstnew("string3");

    ft_lstadd_front(&lst, string1);
    ft_lstadd_front(&lst, string2);
    ft_lstadd_front(&lst, string3);

	t_list *tracker;
	tracker = lst;
    while (tracker)
	{
        printf("%s\n", (char *)tracker->content);
        tracker = tracker->next;
    }
	return (0);
}
