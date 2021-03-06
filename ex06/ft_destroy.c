/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 11:14:38 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 11:53:57 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (factory[i] != NULL)
	{
		j = 0;
		while (factory[i][j] != NULL)
		{
			k = 0;
			while (factory[i][j][k] != '\0')
			{
				factory[i][j][k] = '\0';
				k++;
			}
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
