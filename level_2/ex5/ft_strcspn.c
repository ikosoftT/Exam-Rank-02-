/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 01:07:33 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 01:58:05 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    
    i = 0;
    while (s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}