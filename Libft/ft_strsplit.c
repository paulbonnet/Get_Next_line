/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 11:24:44 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/21 21:24:35 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		nb_words(char const *s, char c)
{
	int i;
	int	nb;

	nb = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[i] && s[i] != c)
		nb++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb++;
		i++;
	}
	return (nb);
}

static	int		fill_word(char **tab, int p[2], char const *s, char c)
{
	int	cpt;
	int i;

	i = 0;
	cpt = p[0];
	while (s[cpt] && s[cpt] != c)
		cpt++;
	if (!(tab[p[1]] = malloc(cpt - p[0] + 1)))
		return (0);
	cpt = 0;
	while (s[p[0]] && s[p[0]] != c)
	{
		tab[p[1]][cpt] = s[p[0]];
		p[0]++;
		cpt++;
	}
	tab[p[1]][cpt] = '\0';
	return (p[0]);
}

static	char	**in_case_of(void)
{
	char	**tab;

	if (!(tab = malloc(1 * sizeof(*tab))))
		return (0);
	tab[0] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		len;
	int		p[2];
	char	**tab;

	p[1] = 0;
	p[0] = -1;
	len = nb_words(s, c);
	if (len == 0)
		return (in_case_of());
	if (!(tab = malloc((len + 1) * sizeof(*tab))))
		return (0);
	while (s[++p[0]])
	{
		if (s[p[0]] != c)
		{
			p[0] = fill_word(tab, p, s, c);
			p[1]++;
			if (!s[p[0]])
				p[0]--;
		}
	}
	tab[len] = NULL;
	return (tab);
}
