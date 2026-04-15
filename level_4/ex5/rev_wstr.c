/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 04:09:38 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 04:16:16 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

void rev(char *s)
{
    int l = 0;
    int start = 0;
    int end = 0;
    
    while(s[l])
        l++;
    l--;
    while (l >= 0)
    {
        while(s[l] && is_space(s[l]))
            l--;
        end = l;
        while(s[l] && !is_space(s[l]))
            l--;
        start = l + 1;
        while(start <= end)
            ft_putchar(s[start++]);
        if (l > 0)
            ft_putchar(' ');
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev(av[1]);
    ft_putchar('\n');
}