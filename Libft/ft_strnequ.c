/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:30:01 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/15 16:11:32 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 != 0 && s2 != 0)
	{
		while (s1[i] && s2[i] && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
