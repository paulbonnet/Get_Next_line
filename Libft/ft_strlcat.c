/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:48:30 by pabonnet          #+#    #+#             */
/*   Updated: 2018/12/20 14:19:35 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	ret;
	size_t			i;
	size_t			j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	ret = j + (size < i ? size : i);
	if (size == 0)
		return (ret);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ret);
}
