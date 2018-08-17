/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:29:53 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 16:32:16 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int		i;
	int		max;

	i = 1;
	if (length > 0)
		max = tab[0];
	else
		return (0);
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	return (max);
}
