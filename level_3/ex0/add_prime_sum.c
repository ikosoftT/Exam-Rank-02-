/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:13:09 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 22:21:08 by yikoubaz         ###   ########.fr       */
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

int ft_atoi(char *str)
{
    int res;
    int i;

    res = 0;
    i = 0;
    while (is_space(str[i]))
        i++;
   
    while(str[i] >= '0'  && str[i] <= '9')
            res = res * 10 + (str[i++] - '0');
    return (res);
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n/10);
    ft_putchar(n % 10 + 48);
}

int is_prime(int n)
{
    if (n < 2)
        return (0);
    int i = 2;
    
    while (i*i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void add_sum(int nb)
{
    if (nb <= 0)
    {
        ft_putchar('0');
        return;        
    }
    int i = 1;
    int res = 0;
    
    while (i <= nb)
    {
        if (is_prime(i))
            res += i;
        i++;
    }
    ft_putnbr(res);
}


int main(int ac, char **av)
{
    if (ac == 2)
        add_sum(ft_atoi(av[1]));
    else
        ft_putchar('0');
    ft_putchar('\n');
}