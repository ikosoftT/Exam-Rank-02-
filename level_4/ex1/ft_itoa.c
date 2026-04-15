/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 02:47:31 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/15 03:01:31 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int  count_digits(int nb)
{
    int count = 0;
    if (nb == 0)
        return(1);
    if (nb < 0)
    {
        count++;
        nb = -nb;
    }
    while (nb)
    {
        count++;
        nb /= 10;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    char *res;
    int i = 0;
    i = count_digits(nbr);
    res = malloc(i + 1);
    if (!res)
        return (NULL);
    res[i] = 0;
    if (nbr == 0)
    {
        i--;
        res[i] = '0';
        return(res);
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    i--;
    while(nbr)
    {
        res[i--] = nbr % 10 + 48;
        nbr /= 10;
    }
    return (res);
}