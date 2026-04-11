/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:26:38 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:29:39 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rev(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    i--;
    while(s[i])
        ft_putchar(s[i--]);
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev(av[1]);
    ft_putchar('\n');
}