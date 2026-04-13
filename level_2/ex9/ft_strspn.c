/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 02:22:22 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 02:42:35 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    int found;
    while (s[i])
    {
        j = 0;
        found = 0;
        while(accept[j])
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;  
        }
         if (!found)
            return (i);
        i++;
    }
    return (i);
}
