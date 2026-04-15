/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 23:17:33 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 00:07:58 by yikoubaz         ###   ########.fr       */
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
    int end = 0;
    int start = 0;
    int j;
    if (ac > 1)
    {
        while(av[i])
        {
          j = 0;
          while (av[i][j])
          {
            while(is_space(av[i][j]))
                j++;
            if (av[i][j])
            {
                if (!first)
                    ft_putchar(' ');
                first = 0;
                start = j;
                while(av[i][j] && !is_space(av[i][j]))
                    j++;
                end = j - 1;
                while(start <= end)
                {
                    if (start == end)
                    {
                        if (av[i][start] >= 'a' && av[i][start] <= 'z')
                            av[i][start]-=32;
                    }else
                    {
                        if (av[i][start] >= 'A' && av[i][start] <= 'Z')
                            av[i][start]+=32;
                    }
                    ft_putchar(av[i][start++]);
                }
            }
          }
          i++;  
        }
    }
        
    ft_putchar('\n');
}