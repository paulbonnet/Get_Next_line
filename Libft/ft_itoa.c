/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:14:45 by pabonnet          #+#    #+#             */
/*   Updated: 2018/12/20 17:39:15 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_chiffres(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i = 1;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*do_malloc(int *n)
{
	char *result;

	if (!(result = malloc(nb_chiffres(*n) + 1)))
		return (NULL);
	result[0] = '\0';
	if (*n < 0)
	{
		*n = -*n;
		result[0] = '-';
	}
	return (result);
}

static char		*valeur_min(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("0"));
}

char			*ft_itoa(int n)
{
	int		tmp;
	int		length;
	char	*result;
	int		i;

	if (n == -2147483648 || n == 0)
		return (valeur_min(n));
	if (!(result = do_malloc(&n)))
		return (0);
	length = 1;
	tmp = n;
	while ((tmp = (tmp / 10)) > 0)
		length = length * 10;
	tmp = n;
	i = result[0] == '-' ? 1 : 0;
	while (length)
	{
		result[i] = ((tmp / length) + '0');
		tmp = tmp % length;
		length = length / 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}
