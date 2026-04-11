/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:40:26 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:42:02 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ul(char *s)
{
    int i = 0;
    char c;

    while (s[i])
    {
        c = s[i];
        if (c >= 'a' && c <= 'z')
            c = c - 32;
        else if (c >= 'A' && c <= 'Z')
            c = c + 32;
        ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ul(av[1]);
    ft_putchar('\n');
}