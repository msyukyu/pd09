/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:35:03 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 16:47:43 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	result;
	unsigned int	i;
	unsigned int	power;

	result = (unsigned int)value;
	i = 1;
	power = 1;
	while (power < value)
	{
		power *= 2;
		i++;
	}
	return (i - 1);
}
