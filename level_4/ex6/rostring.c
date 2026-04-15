/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 04:17:14 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 04:27:33 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// All Codes Are Written with Yikoubaz :) No AI

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    return ((c >= 9 && c <= 13) ||  c == 32);
}

int get_word(char *s, int what)
{
    int i = 0;
    int start = 0;
    int end = 0;

    while(s[i] && is_space(s[i]))
        i++;
    start = i;
    while(s[i] && !is_space(s[i]))
        i++;
    end = i - 1;
    if (what)
    {
        while (start <= end)
            ft_putchar(s[start++]);
    } else
        return (end + 1);
    return (0);
}

void rostring(char *s)
{
    int i;
    
    i = get_word(s, 0);
    
    while(s[i])
    {
        while(s[i] && is_space(s[i]))
            i++;
        while(s[i] && !is_space(s[i]))
            ft_putchar(s[i++]);
        ft_putchar(' ');
    }
    get_word(s, 1);
}

int main(int ac, char **av)
{
    if (ac > 1)
        rostring(av[1]);
    ft_putchar('\n');
}