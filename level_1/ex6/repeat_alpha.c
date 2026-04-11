/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:20:22 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:24:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c, int i)
{
    while ((i--) >= 0)
        write(1, &c, 1);
}

void re(char *s)
{
    int i = 0;
    char c;
    while (s[i])
    {
        c = s[i];
        if (c >= 'a' && c <= 'z')
            ft_putchar(c, c - 'a');
        else if (c >= 'A' && c <= 'Z')
            ft_putchar(c, c - 'A');
        else
            ft_putchar(c, 0);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        re(av[1]);
    ft_putchar('\n', 0);
}