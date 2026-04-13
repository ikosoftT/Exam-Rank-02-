/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:23:26 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 00:34:17 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int ft_atoi(char *str)
{
    int res;
    int sign;
    int i;

    res = 0;
    sign = 1;
    i = 0;
    while (is_space(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;       
    }
    while(str[i] >= '0'  && str[i] <= '9')
            res = res * 10 + (str[i++] - '0');
    return (res * sign);
}
