/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arissane <arissane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:45:47 by arissane          #+#    #+#             */
/*   Updated: 2024/05/08 11:10:12 by arissane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*templst;

	while (*lst)
	{
		templst = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = templst;
	}
	free(*lst);
	*lst = NULL;
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*nodecpy;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		nodecpy = ft_lstnew(temp);
		if (nodecpy == NULL)
		{
			del(temp);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, nodecpy);
		lst = lst->next;
	}
	return (newlst);
}

void	*plus1(void *content)
{
	int	a;
	char *str;

	str = (char*)content;
	a = 0;
	while (str[a])
	{
		str[a] += 1;
		a++;
	}
	return (content);
}

int main(void)
{
	t_list *lst = NULL;
    t_list *string1 = ft_lstnew(strdup("string1"));
    t_list *string2 = ft_lstnew(strdup("string2"));
    t_list *string3 = ft_lstnew(strdup("string3"));

    ft_lstadd_back(&lst, string1);
    ft_lstadd_back(&lst, string2);
    ft_lstadd_back(&lst, string3);

	t_list *tracker;
	tracker = lst;
    while (tracker)
	{
        printf("%s\n", (char *)tracker->content);
        tracker = tracker->next;
    }
	printf("\n");

	t_list	*lst2 = ft_lstmap(lst, &plus1, &free);

	tracker = lst2;
    while (tracker)
	{
        printf("%s\n", (char *)tracker->content);
        tracker = tracker->next;
    }
	return (0);
}
