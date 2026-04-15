/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 04:35:28 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 04:46:15 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t; 
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *first;
    t_list *second;

    if (!lst)
        return (NULL);
    
    first = lst;
    while(first)
    {
        second = first->next;
        while(second)
        {
            if (!cmp(first->data, second->data))
            {
                ft_swap(&first->data, &second->data);   
            }
            second = second->next;
        }
        first = first->next;
    }
    return (lst);    
}