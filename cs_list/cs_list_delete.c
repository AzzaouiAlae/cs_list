/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_list_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:44:18 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/19 11:44:19 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs_list.h"

void	cs_list_delete_char(char *s, int count, int index)
{
	while (index < count - 1)
	{
		s[index] = s[index + 1];
		index++;
	}
	if (index == count - 1)
		s[index] = 0;
}

void	cs_list_delete_int(int *nums, int count, int index)
{
	while (index < count - 1)
	{
		nums[index] = nums[index + 1];
		index++;
	}
	if (index == count - 1)
		nums[index] = 0;
}

void	cs_list_delete_long(long *nums, int count, int index)
{
	while (index < count - 1)
	{
		nums[index] = nums[index + 1];
		index++;
	}
	if (index == count - 1)
		nums[index] = 0;
}

void	cs_list_delete(t_cs_list *list, int index)
{
	if (index >= list->count)
		return ;
	if (list->size_of_type == 1)
		cs_list_delete_char(list->contate, list->count, index);
	else if (list->size_of_type == 4)
		cs_list_delete_int(list->contate, list->count, index);
	else if (list->size_of_type == 8)
		cs_list_delete_long(list->contate, list->count, index);
	else
		return ;
	list->count--;
}

void	cs_list_clear(t_cs_list *list)
{
	if (!list)
		return ;
	ft_bzero(list->contate, list->count * list->size_of_type);
	list->count = 0;
}
