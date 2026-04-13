/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:05:33 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/12 19:09:04 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void m(char *s)
{
    int i = 0;
    int n; 
    char c;
    while (s[i])
    {
        c = s[i];
        if (c >= 'a' && c <= 'z')
        {
            n = c - 'a';
            c = 'z' - n;
        }else if (c >= 'A' && c <= 'Z')
        {
            n = c - 'A';
            c = 'Z' - n;
        }
        ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        m(av[1]);
    ft_putchar('\n');
    return (0);
}