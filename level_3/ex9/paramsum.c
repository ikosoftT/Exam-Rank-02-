/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:39:01 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:41:32 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);
}

int main(int ac, char **av)
{
    if (ac > 1)
        ft_putnbr(ac - 1);
    else
       ft_putchar('0');
    ft_putchar('\n');
    return (0);
}