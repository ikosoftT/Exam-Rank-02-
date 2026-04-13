/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:08:11 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 02:21:47 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int l = 0;
    int i = 0;
    while (str[l])
        l++;
    l--;
    char t;
    while(i < l)
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
        i++;
        l--;
    }
    return (str);
}
#include <stdio.h>

int main()
{
    char test[] = "1337";
    printf("%s\n", ft_strrev(test));
}