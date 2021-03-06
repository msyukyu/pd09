/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 09:50:29 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 10:29:16 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = (str[i] - 'a' + 42) % 26 + 'a';
		else if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = (str[i] - 'A' + 42) % 26 + 'A';
		i++;
	}
	return (str);
}
