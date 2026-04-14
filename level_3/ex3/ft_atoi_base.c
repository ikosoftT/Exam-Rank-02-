/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:00:55 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:14:36 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int val = 0;
    int sign = 1;

    while(is_space(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            val = str[i] - 48;
        else if (str[i] >= 'a' && str[i] <= 'f')
            val = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            val = str[i] - 'A' + 10;
        res = res * str_base + (val);
        i++;
    }
    return (res*sign);
}
