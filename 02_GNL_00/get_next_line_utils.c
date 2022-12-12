/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:16 by mrony             #+#    #+#             */
/*   Updated: 2022/12/12 17:19:04 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_gnl_list	*ft_lstnew(void *content)
{
	t_gnl_list	*element;

	element = malloc(sizeof(t_gnl_list));
	if (element)
	{
		element->content = content;
		element->next = NULL;
	}
	return (element);
}

