/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:29:43 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:35:27 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rot_13(char *s)
{
    int i = 0;
    char c;
    while (s[i])
    {
        c = s[i];
        if (c >= 'a' && c <= 'z')
            ft_putchar((c - 'a' + 13) % 26 + 'a');
        else if (c >= 'A' && c <= 'Z')
            ft_putchar((c - 'A' + 13) % 26 + 'A');
        else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    ft_putchar('\n');
}