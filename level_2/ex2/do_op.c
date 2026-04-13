/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:14:32 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/12 19:22:27 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void op(int a, char p, int b)
{
    int res = 0;
    if (p == '+')
        res = a + b;
    else if (p == '-')
        res = a - b;
    else if (p == '*')
        res = a * b;
    else if (p == '/')
        res = a / b;
    else if (p == '%')
        res = a % b;
    printf("%d\n", res);
}

int main(int ac, char **av)
{
    if (ac == 4)
        op(atoi(av[1]), *av[2], atoi(av[3]));
}