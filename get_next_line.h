/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:02:56 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/26 01:45:50 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/resource.h>
# include <unistd.h>
# include <stdlib.h>

size_t	str_len(char *s);
size_t	str_copy(char *dst, char *src, size_t size);
char	*str_join(char *s1, char *s2);
char	*str_dup(char *s);
int		get_next_line(int fd, char **line);

#endif
