/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:55:26 by pabonnet          #+#    #+#             */
/*   Updated: 2019/03/06 17:51:16 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "Libft/libft.h"
#include "get_next_line.h"

int		malloc_env(t_env *env)
{
	if (!(env = malloc(sizeof(t_env))))
		return (-1);
	env->buf = 0;
	env->pos = 0;
	env->read_len = 0;
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_env *env;
	int		i;

	i = 0;
	if (!env && !malloc_env(env))
		return (-1);
	if (fd == -1)
		return (0);
	while (((env->read_len = read(fd, env->buf, BUFF_SIZE))) > 0)
	{
		env->buf[read_len] == '\0';
		while (env->buf[i] != '\n' && env->buf[i] != '\0')
			i++;
		if (env->buf[i] == '\n')
			break;
	}
	*line = ft_strsub(env->buf, env->pos, i - env->pos);
	return (0);
}

int		main(int argc, char **argv)
{
	char *line;
	int fd;
	
	if (argc == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	return (0);
}
