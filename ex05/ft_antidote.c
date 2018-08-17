/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:47:56 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 11:15:44 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int		tri[3];
	int		a;
	int		b;
	int		temp;

	tri[0] = i;
	tri[1] = j;
	tri[2] = k;
	a = 2;
	while (a > 0)
	{
		b = 0;
		while (b < a)
		{
			if (tri[b] > tri[b + 1])
			{
				temp = tri[b];
				tri[b] = tri[b + 1];
				tri[b + 1] = temp;
			}
			b++;
		}
		a--;
	}
	return (tri[1]);
}
