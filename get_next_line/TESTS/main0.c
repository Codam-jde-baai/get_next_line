/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main0.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 14:22:07 by jde-baai      #+#    #+#                 */
/*   Updated: 2022/12/14 13:56:19 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd);

int main()
{
	int	fd;
	int	i;
	char *ptr;

	fd = open("./file0", O_RDONLY);
	if (fd == -1)
	{
		printf("open() error");
		return(0);
	}
	printf("========Get Next Line========");
	printf("\nFD: %i\n", fd);
	i = 1;
	while (i <= 8)
	{
		ptr = get_next_line(fd);
		printf("LINE%i: %s", i, ptr);
		i++;
		free(ptr);
	}
}