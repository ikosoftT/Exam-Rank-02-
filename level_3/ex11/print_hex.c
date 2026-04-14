/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:50:25 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:54:12 by yikoubaz         ###   ########.fr       */
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

int ft_atoi(char *s)
{
    int res = 0;
    int i = 0;

    while(is_space(s[i]))
        i++;
    while(s[i] >= '0' && s[i] <= '9')
        res = res * 10 + s[i++] - 48;
    return (res);
}

void print_hex(int nb)
{
    char *base = "0123456789abcdef";
    
    if (nb >= 16)
        print_hex(nb / 16);
    ft_putchar(base[nb % 16]);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    ft_putchar('\n');
}