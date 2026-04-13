/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:34:46 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 05:49:29 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void un(char *a, char *b)
{
    char seen[254] = {0};
    int i = 0;
    while (a[i])
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = 1;
            ft_putchar(a[i]);
        }
        i++;
    }
    i = 0;
    while (b[i])
    {
         if (!seen[a[i]])
        {
            seen[a[i]] = 1;
            ft_putchar(a[i]);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        un(av[1], av[2]);
    ft_putchar('\n');
}