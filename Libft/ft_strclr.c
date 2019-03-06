/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 12:39:38 by pabonnet          #+#    #+#             */
/*   Updated: 2019/01/14 19:53:38 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s != 0)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
