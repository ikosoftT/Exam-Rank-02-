/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:02:21 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 05:06:12 by yikoubaz         ###   ########.fr       */
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

void lw(char *s)
{
    int l = 0;
    int str = 0;
    int end = 0;
    while (s[l])
        l++;
    l--;
    while (is_space(s[l]))
        l--;
    end = l;
    while(!is_space(s[l]))
        l--;
    str = l + 1;
    while (str <= end)
        ft_putchar(s[str++]);
}

int main(int ac, char **av)
{
    if (ac == 2)
        lw(av[1]);
    ft_putchar('\n');
    return (0);    
}