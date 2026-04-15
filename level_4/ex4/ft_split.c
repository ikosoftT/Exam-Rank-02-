/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 03:57:52 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 04:08:42 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int count_words(char *s)
{
    int i;
    int count = 0;
    i = 0;
    while(s[i])
    {
        while(is_space(s[i]))
            i++;
        if (s[i])
            count++;
        while(s[i] && !is_space(s[i]))
            i++;
    }
    return (count);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **spl = malloc(sizeof(char *) * count_words(str) + 1);
    if (!spl)
        return (NULL);
 
    while (i < count_words(str))
        spl[i++] = malloc(1024);
    i = 0;
    while (str[i])
    {
        while(str[i] && is_space(str[i]))
            i++;
        
        if (str[i])
        {
            k = 0;
            while(str[i] && !is_space(str[i]))
                spl[j][k++] = str[i++];
            spl[j][k] = 0;
            j++;
        }
    }
    spl[j] = NULL;
    return (spl);
}
