/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:21:45 by arissane          #+#    #+#             */
/*   Updated: 2024/05/08 10:25:42 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if (!lst || !new)
		return ;
	final = (*lst);
	if (!final)
	{
		*lst = new;
		return ;
	}
	while (final->next)
		final = final->next;
	final->next = new;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*templst;

	while (*lst)
	{
		templst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = templst;
	}
	free(*lst);
	*lst = NULL;
}

int	main(void)
{
	t_list *lst = NULL;
    t_list *string1 = ft_lstnew(strdup("string1"));
    t_list *string2 = ft_lstnew(strdup("string2"));
    t_list *string3 = ft_lstnew(strdup("string3"));

    ft_lstadd_back(&lst, string1);
    ft_lstadd_back(&lst, string2);
    ft_lstadd_back(&lst, string3);
    ft_lstclear(&lst, &free);

    if (!lst)
        printf("Null\n");
    else
        printf("%s\n", lst->content);
    return (0);
}
