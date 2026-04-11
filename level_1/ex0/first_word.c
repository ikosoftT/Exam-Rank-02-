/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:02:50 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/11 08:08:36 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    return((c >= 9 && c <= 13) || c == 32);
}

void fw(char *s)
{
    int i = 0;
    while(is_space(s[i]))
        i++;
    while(!is_space(s[i]))
        ft_putchar(s[i++]);
   
}

int main(int ac, char **av)
{
    if (ac == 2)
        fw(av[1]);
    ft_putchar('\n');
    return (0);
}