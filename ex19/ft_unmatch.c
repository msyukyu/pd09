/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:50:21 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 14:25:44 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int a;
	int b;
	int	temp;

	a = length - 1;
	while (a-- > 0)
	{
		b = 0;
		while (b++ < a + 1)
			if (tab[b - 1] > tab[b])
			{
				temp = tab[b - 1];
				tab[b - 1] = tab[b];
				tab[b] = temp;
			}
	}
	a = 0;
	while (a < length)
	{
		if (tab[a] != tab[a + 1])
			return (tab[a]);
		a += 2;
	}
	return (tab[length - 1]);
}
