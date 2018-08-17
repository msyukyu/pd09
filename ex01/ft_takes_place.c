/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:21:17 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 10:43:07 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h1;
	int		h2;
	int		h3;
	char	m1;
	char	m2;

	hour = hour % 24;
	h1 = (hour % 12 == 0) ? 12 : hour % 12;
	h2 = hour / 12;
	if (h2 == 0)
		m1 = 'A';
	else
		m1 = 'P';
	hour = hour + 1;
	hour = hour % 24;
	h2 = (hour % 12 == 0) ? 12 : hour % 12;
	h3 = hour / 12;
	if (h3 == 0)
		m2 = 'A';
	else
		m2 = 'P';
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			h1, m1, h2, m2);
}
