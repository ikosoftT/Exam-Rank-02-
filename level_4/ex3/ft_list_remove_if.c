/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 03:10:10 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 03:33:37 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;

    while (*begin_list)
    {
        if (!cmp((*begin_list)->data, data_ref))
        {
            tmp = *begin_list;
            *begin_list = (*begin_list)->next;
            free(tmp);
        }else
            begin_list = &(*begin_list)->next;
    }
}