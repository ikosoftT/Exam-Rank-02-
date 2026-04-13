/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:24:37 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/13 05:24:56 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 8;
	result = 0;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (result);
}