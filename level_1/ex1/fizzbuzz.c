/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:10:10 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:14:45 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    while(*s)
        ft_putchar(*s++);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);
}

int main(void)
{
    int i = 0;

    while(i <= 100)
    {
        if (i%15 == 0)
            ft_putstr("fizzbuzz");
        else if (i%5 == 0)
            ft_putstr("buzz");
        else if (i%3 == 0)
            ft_putstr("fizz");
        else
            ft_putnbr(i);
        ft_putchar('\n');
        i++;
    }
    return (0);
}