/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:36:39 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:39:23 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void search(char *s,char a, char b)
{
    int i = 0;
    char c;

    while (s[i])
    {
        c = s[i];
        if (c == a)
            c = b;
        ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
        search(av[1], *av[2], *av[3]);
    ft_putchar('\n');
}