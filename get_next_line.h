/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:54:33 by cefelix           #+#    #+#             */
/*   Updated: 2024/06/09 11:54:36 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Define the buffer size if not defined
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

// Function declarations used in get_next_line
char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
int		buffer_size(int fd, char *buffer, int *size, int *pos);
void	initialize_state(int *state);	

#endif
