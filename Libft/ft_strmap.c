/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:40:18 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/15 17:19:24 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s)
		return (NULL);
	if (!(s2 = malloc(ft_strlen(s) + 1)))
		return (0);
	while (s[i])
	{
		((unsigned char *)s2)[i] = f(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
