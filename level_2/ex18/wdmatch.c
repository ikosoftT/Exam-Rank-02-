/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:51:43 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 06:04:43 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void wmatch(char *a, char *b)
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
    {
        i = 0;
        while (a[i])
            ft_putchar(a[i++]);
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        wmatch(av[1], av[2]);
    ft_putchar('\n');
    return (0);
}