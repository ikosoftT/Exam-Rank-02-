/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:26:42 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 05:32:18 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void sn(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == '_')
        {
            if (s[i + 1] >= 'a' && s[i+1] <= 'z')
                s[i+1] = s[i + 1] - 32;
            i++;
        }
        ft_putchar(s[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        sn(av[1]);
    ft_putchar('\n');
}