/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:36:14 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/14 18:01:19 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(str) == 0 && ft_strlen(to_find) == 0)
		return ((char*)str);
	if ((ft_strlen(str) == 0) && (ft_strlen(to_find) > 0))
		return (NULL);
	if (ft_strlen(to_find) == 0)
		return ((char*)str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char*)str + i);
		}
		i++;
	}
	return (0);
}
