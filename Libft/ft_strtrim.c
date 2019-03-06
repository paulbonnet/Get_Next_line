/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:19:18 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/16 18:57:04 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int	i;
	int	start;
	int	end;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	end = 0;
	while (i > 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i--;
	end = i + 1;
	if (end < start || end == start)
		return (ft_strnew(0));
	return (ft_strsub(s, start, end - start));
}
