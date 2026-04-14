/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:24:53 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 23:26:39 by yikoubaz         ###   ########.fr       */
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

void epur(char *s)
{
    int i = 0;
    int space = 0;
    while(s[i])
    {
        while(s[i] && is_space(s[i]))
            i++;
        while(s[i] && !is_space(s[i]))
        {
            space = 1;
            ft_putchar(s[i++]);
        }
        if (space && s[i+1])
        {
            ft_putchar(' ');
            space = 0;
        }
        while(s[i] && is_space(s[i]))
            i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur(av[1]);
    ft_putchar('\n');
}