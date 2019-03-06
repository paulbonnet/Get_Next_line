/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:34:04 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/14 16:28:05 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	int		find_len;

	i = ft_strlen(to_find);
	if (i == 0)
		return (char*)(str);
	find_len = i;
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == (unsigned char)to_find[j] && i + j < len)
		{
			if (j == find_len - 1)
				return ((char*)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
