/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:22:48 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/17 13:45:57 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define I var[0]
#define PINNED var[1]
#define PINNED_SPACE var[2]
#define SEARCH_SPACE var[3]

const char g_president[] = "president";
const char g_attack[] = "attack";
const char g_bauer[] = "bauer";

int		ft_strcmpi(const char *str, const char *cmp)
{
	int	i;

	i = 0;
	while (str[i] && cmp[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a' && cmp[i] <= 'Z' && cmp[i] >= 'A')
		{
			if (str[i] + ('A' - 'a') != cmp[i])
				return (str[i] + ('A' - 'a') - cmp[i]);
		}
		else if (str[i] <= 'Z' && str[i] >= 'A' && cmp[i] <= 'z' &&
			cmp[i] >= 'a')
		{
			if (str[i] + ('a' - 'A') != cmp[i])
				return (str[i] + ('a' - 'A') - cmp[i]);
		}
		else if (str[i] != cmp[i])
			return (str[i] - cmp[i]);
		i++;
	}
	if (str[i] == cmp[i])
		return (0);
	else if (str[i] == '\0')
		return (-1);
	return (1);
}

char	*ft_del_spaces(char *str)
{
	int	var[4];

	SEARCH_SPACE = 1;
	PINNED_SPACE = -1;
	I = 0;
	while (str[I] == ' ')
		I++;
	PINNED = I;
	while (str[I] != '\0')
	{
		if (str[I] == ' ' && SEARCH_SPACE)
		{
			PINNED_SPACE = I;
			SEARCH_SPACE = 0;
		}
		else if (SEARCH_SPACE == 0 && str[I] != ' ')
		{
			SEARCH_SPACE = 1;
			PINNED_SPACE = -1;
		}
		I++;
	}
	if (PINNED_SPACE != -1)
		str[PINNED_SPACE] = '\0';
	return (str + PINNED);
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc && argc > 1)
	{
		if (ft_strcmpi(ft_del_spaces(argv[i]), g_president) == 0 ||
				ft_strcmpi(ft_del_spaces(argv[i]), g_attack) == 0 ||
				ft_strcmpi(ft_del_spaces(argv[i]), g_bauer) == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
