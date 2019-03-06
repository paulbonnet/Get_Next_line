/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 12:18:55 by pabonnet          #+#    #+#             */
/*   Updated: 2018/12/19 14:11:24 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	if (c == 0)
		return ((char*)(s + i - 1));
	while (--i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
	}
	return (NULL);
}
