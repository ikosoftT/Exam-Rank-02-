/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:31:36 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:35:04 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void hideenp(char *a, char *b)
{
    int i = 0;
    int j = 0;

    while (b[j])
    {
        if (a[i] == b[j])
            i++;
        j++;
    }
    if (!a[i])
        ft_putchar('1');
    else
        ft_putchar('0');
}

int main(int ac, char **av)
{
    if (ac == 3)
        hideenp(av[1], av[2]);
    ft_putchar('\n');    
}