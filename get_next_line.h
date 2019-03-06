/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:22:18 by pabonnet          #+#    #+#             */
/*   Updated: 2019/03/04 18:31:18 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10

typedef struct	s_env
{
	char	*buf;
	int		read_len;
	int		pos;
}				t_env;

int		get_next_line(const int fd, char **line);

#endif
