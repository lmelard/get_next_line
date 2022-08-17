/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:56:36 by lmelard           #+#    #+#             */
/*   Updated: 2022/03/03 20:18:04 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dst, char *src);
size_t	ft_strlcat(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
size_t	ft_check_n(char *s1);
char	*ft_get_line(char *s1);
char	*ft_get_buffer(char *tmp);
char	*get_next_line(int fd);
char	*ft_find_line(char **tmp, char **line);

#endif