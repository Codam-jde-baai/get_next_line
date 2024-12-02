/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 12:46:43 by jde-baai      #+#    #+#                 */
/*   Updated: 2022/12/14 14:47:18 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
int		getnl_strlen(const char *s);
char	*getnl_strdup(const char *s1);
char	*getnl_copy(char *input, int len, char **ptr);
char	*getnl_join(char *str1, char *str2, char **ptr);
char	*free_return(char **ptr);

#endif /* GET_NEXT_LINE_H */