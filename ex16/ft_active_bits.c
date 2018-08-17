/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:35:03 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 16:56:55 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	result;
	unsigned int	count;

	count = 0;
	result = (unsigned int)value;
	while (!(value / 2 == 0 && value % 2 == 0))
	{
		count += value % 2;
		value = value / 2;
	}
	return (count);
}
