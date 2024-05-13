/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:29:16 by arissane          #+#    #+#             */
/*   Updated: 2024/05/08 10:45:36 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*templst;

	templst = lst;
	while (templst)
	{
		f(templst->content);
		templst = templst->next;
	}
}

void	printcont(void	*content)
{
	printf("%s\n", content);
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

	ft_lstiter(lst, printcont);

    return (0);
}
