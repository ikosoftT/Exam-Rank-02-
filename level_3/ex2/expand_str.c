/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:27:44 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 04:59:30 by yikoubaz         ###   ########.fr       */
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

void extand(char *s)
{
    int i = 0;
    int first = 1;
    while(s[i])
    {
        while(s[i] && is_space(s[i]))
            i++;
        if (s[i])
        {
            if (!first)
                write(1, "   ", 3);
                while (s[i] && !is_space(s[i]))
                    ft_putchar(s[i++]);
            first = 0;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        extand(av[1]);
    ft_putchar('\n');
}