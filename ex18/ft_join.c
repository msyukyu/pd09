/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:28:38 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 16:20:36 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_count_str(char *tab)
{
	int		j;
	size_t	bytes;

	j = 0;
	bytes = 0;
	while (tab[j] != '\0')
	{
		bytes++;
		j++;
	}
	return (bytes);
}

size_t	ft_count(char **tab, char *sep)
{
	int		i;
	int		j;
	size_t	bytes;
	size_t	sep_bytes;

	sep_bytes = ft_count_str(sep);
	bytes = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			bytes++;
			j++;
		}
		bytes += sep_bytes;
		i++;
	}
	bytes = bytes - sep_bytes + 1;
	return (bytes);
}

void	ft_write_word(char **tab, char *str, int i, size_t *c)
{
	int	j;

	j = 0;
	while (tab[i][j] != '\0')
	{
		str[*c] = tab[i][j];
		*c += 1;
		j++;
	}
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		j;
	size_t	c;
	size_t	l;

	l = ft_count(tab, sep);
	str = (char *)malloc(l);
	c = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		ft_write_word(tab, str, i, &c);
		j = 0;
		while (sep[j] != '\0' && c + 1 < l)
		{
			str[c] = sep[j];
			c++;
			j++;
		}
		i++;
	}
	str[l - 1] = '\0';
	return (str);
}
