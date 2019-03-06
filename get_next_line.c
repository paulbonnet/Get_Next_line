/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:55:26 by pabonnet          #+#    #+#             */
/*   Updated: 2019/03/06 18:30:52 by pabonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "Libft/libft.h"
#include "get_next_line.h"

int		malloc_env(t_env **env)
{
	if (!(*env = malloc(sizeof(t_env))))
		return (-1);
	(*env)->buf = 0;
	(*env)->pos = 0;
	(*env)->read_len = 0;
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_env *env;
	int		i;

	i = 0;
	if (!env && !malloc_env(&env))
		return (-1);
	if (fd == -1)
		return (0);
	printf("a\n");
	while ((env->read_len = read(fd, env->buf, BUFF_SIZE)) > 0)
	{
		printf("b\n");
		env->buf[env->read_len] = '\0';
		while (env->buf[i] != '\0' && env->buf[i] != '\n')
		printf("%s\n", env->buf);
			i++;
		if (env->buf[i] == '\n')
			break;
		printf("%d\n", env->read_len);
	}
	printf("c\n");
	*line = ft_strsub(env->buf, env->pos, i - env->pos);
		printf("%s\n", *line);
	return (0);
}

int		main(int argc, char **argv)
{
	char *line;
	int fd;
	
	if (argc != 2)
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
