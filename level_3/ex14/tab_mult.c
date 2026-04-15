/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:55:10 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 01:09:01 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    return ((c >= 9 && c <= 13) ||  c == 32);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);    
}

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;

    while(is_space(s[i]))
        i++;
    while(s[i] >= '0' && s[i] <= '9')
        res = res * 10 + (s[i++] - 48);
    return (res);
}

void tab(int nb)
{
    int res = 0;
    int i = 1;
    while(i <= 9)
    {
        res = i * nb;
        ft_putchar(i + 48);
        ft_putchar(' ');
        ft_putchar('*');
        ft_putchar(' ');
        ft_putnbr(nb);
        ft_putchar(' ');
        ft_putchar('=');
        ft_putchar(' ');
        ft_putnbr(res);
        if (i > 0)
            ft_putchar('\n');
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        tab(ft_atoi(av[1]));
}