/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 12:30:14 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/15 16:15:04 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		i;
	void	*result;

	i = 0;
	if (!(result = malloc(size)))
		return (NULL);
	while (i < (int)size)
	{
		((unsigned char*)result)[i] = 0;
		i++;
	}
	return (result);
}
