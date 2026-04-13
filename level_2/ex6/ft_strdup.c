/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 01:58:50 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 02:01:06 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int l = 0;
    int i = 0;
    
    while (src[l])
        l++;
    char *new = malloc(l + 1);
    if (!new)
        return (NULL);
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = 0;
    return (new);
}
