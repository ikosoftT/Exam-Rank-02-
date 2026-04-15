/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 02:43:18 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 02:46:18 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fprime(int nb)
{
    if (nb <= 0)
        return;
    if (nb == 1)
        printf("1");
    int div = 1;
    while (nb > div++)
    {
        if (nb % div == 0)
        {
            printf("%d", div);
            if (nb == div)
                break;
            printf("*");
            nb /= div;
            div = 1;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");       
}