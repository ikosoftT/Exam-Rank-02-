/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:09:44 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 00:50:08 by yikoubaz         ###   ########.fr       */
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

int main(int ac, char **av)
{
    int i = 1;
    int first = 1;
    int j;
    if (ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                while(av[i][j] && is_space(av[i][j]))
                    j++;
                if (av[i][j])
                {
                    if (!first)
                        ft_putchar(' ');
                    first = 0;
                    if (av[i][j] >= 'a' && av[i][j] <= 'z')
                        av[i][j] -= 32;
                    while(av[i][j] && !is_space(av[i][j]))
                    {
                         if (c >= 'A' && c <= 'Z')
                            av[i][j] += 32;
                        ft_putchar(av[i][j]);
                        j++;
                    }
                }
            }
            i++;
        }
    }
    ft_putchar('\n');
}
