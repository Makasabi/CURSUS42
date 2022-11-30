/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:30:24 by mrony             #+#    #+#             */
/*   Updated: 2022/11/26 12:05:48 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1), 
		i++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}

t_list  *ft_lstnew(void *content)
{
	t_list  *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

int	ft_lstsize(t_list *lst)
{
	int	nb_elements;
	t_list	*tmp;

	tmp = lst;
	nb_elements = 0;
	while (tmp)
	{
		tmp = tmp->next;
		nb_elements++;
	}
	return (nb_elements);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlast(*lst);
			tmp->next = new;
		}
	}
}

void	del(void *list)
{
	free(lst->content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		if (lst == NULL)
			return ;
		else
		{
			del(lst->content);
			free(lst);
		}
	}
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	
	if (lst)
	{
		if (*lst == NULL)
			return ;
		else
		{
			while (*lst)
			{
				tmp = (*lst)->next;
				ft_lstdelone(*lst, del);
				(*lst) = tmp;
			}
		}
	}
}

void	*f (void * p)
{
	void * r = malloc(sizeof(int));
	*(int*)r = *(int*)p + 1; 
	return (r);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		if (lst == NULL)
			return ;
		else 
		{
			while (lst)
			{
				tmp = lst->next;
				f(lst->content);
				lst = tmp;
			}
		}
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (lst == NULL || !f || !del)
		return (NULL);
	new_element = ft_lstnew(f(lst->content));
	if (!new_element->content)
		ft_lstclear(&new_element, del);
	new_list = new_element;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_element = ft_lstnew(f(lst->content));
		if (!new_element->content)
		{
			ft_lstclear(&new_list, del);
			free(new_list);
		}
		ft_lstadd_back(&new_list, new_element);
		
	}
	return (new_list);
}

int	main(void)
{
	t_list	*list0;
	t_list	*list_1;
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*new_list;

	char	zero[] = "b";
	char	mone[] = "a";
	char	one[] = "c";
	char	two[] = "d";
	char	three[] = "e";

	list0 = ft_lstnew(zero);
	list_1 = ft_lstnew(mone);
	list1 = ft_lstnew(one);
	list2 = ft_lstnew(two);
	list3 = ft_lstnew(three);
	ft_lstadd_front(&list0, list_1);
	ft_lstadd_back(&list0, list1);
	ft_lstadd_back(&list0, list2);
	ft_lstadd_back(&list0, list3);
	printf("list size: %d\n", ft_lstsize(list0));
	print_list(list0);
	ft_putstr("\n");
	new_list = ft_lstmap(list0, f, free);
	print_list(new_list);
	ft_lstclear(list0, del);
	print_list(list0);
	
}
