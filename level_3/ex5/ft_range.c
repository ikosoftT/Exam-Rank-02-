/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:17:54 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:24:28 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len = 0;
    if (start >= end)
        len = start - end;
    else
        len = end - start;
    len+=1;
    int *nums = malloc(len * sizeof(int));
    if (!nums)
        return (NULL);
    int i = 0;
    while(i < len)
    {
        if (start <= end)
            nums[i] = start++;
        else
            nums[i] = end--;
        i++;
    }
    return (nums);
}
