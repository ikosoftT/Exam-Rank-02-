/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:10:29 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/12 19:13:20 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c, 1);
}

void cn(char *s)
{
    int i = 0;
    char c;
    while(s[i])
    {
        c = s[i];
        if (c >= 'A' && c <= 'Z')
        {    
            ft_putchar('_');
            ft_putchar(c);
        }else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        cn(av[1]);
    ft_putchar('\n');    
}