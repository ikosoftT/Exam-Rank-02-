/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 05:36:26 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/04/14 05:37:59 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	div;

	if (a == 0 || b == 0)
		return (0);
	div = 2;
	while (1)
	{
		if (a % div == 0 && b % div == 0)
			return (div);
		else if (div > a || div > b)
			return (1);
		div++;
	}
}