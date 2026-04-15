/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 04:28:13 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 04:34:47 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Again No Ai used here.

void ft_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void ft_sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j;

    while (i <  size)
    {
        j = i + 1;
        while(j < size)
        {
            if (tab[i] > tab[j])
                ft_swap(&tab[i], &tab[j]);
            j++;
        }
        i++;
    }
}
