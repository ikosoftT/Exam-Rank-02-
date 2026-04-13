/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:12:11 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 05:23:19 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    unsigned char res;
    int i;

    i = 8;
    while ((i--) > 0)
    {
        res = (octet >> i & 1) + '0';
        write(1, &res, 1);
    }
}