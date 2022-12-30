/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:42:22 by jotavare          #+#    #+#             */
/*   Updated: 2022/12/18 00:42:24 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

//	function that reads the file, 
//	stores the str in the buffer and joins it to the stash

static int	read_buffer(int fd, char **stash, char *buffer)
{
	char	*tmp;
	int		bytes;

	ft_bzero(buffer, BUFFER_SIZE + 1);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0 || buffer == NULL)
	{
		free(*stash);
		*stash = NULL;
		return (-1);
	}
	if (bytes == 0)
		return (bytes);
	tmp = ft_strjoin(*stash, buffer);
	free(*stash);
	*stash = tmp;
	return (bytes);
}

//	Removes the string obtained in get_result()
//	from the stash.

static void	remove_result(char **stash)
{
	char	*nl;
	char	*tmp;
	size_t	i;
	size_t	j;

	nl = ft_strchr(*stash, '\n');
	if (!nl)
	{
		free(*stash);
		*stash = NULL;
		return ;
	}
	tmp = malloc((ft_strlen(nl)) * sizeof(char));
	i = 0;
	j = ft_strlen(*stash) - ft_strlen(nl) + 1;
	while (j < ft_strlen(*stash))
		tmp[i++] = (*stash)[j++];
	tmp[i] = '\0';
	free(*stash);
	*stash = tmp;
	if (**stash == 0)
	{
		free(*stash);
		*stash = NULL;
	}
}

//	Takes the string to return from the stash

static void	get_result(char **stash, char **result)
{
	char	*nl;
	size_t	len;
	size_t	i;

	nl = ft_strchr(*stash, '\n');
	len = ft_strlen(*stash) - ft_strlen(nl) + 2;
	*result = (char *)malloc(len * sizeof(char));
	if (!result)
		return ;
	i = 0;
	while (i < len - 1)
	{
		(*result)[i] = (*stash)[i];
		i++;
	}
	(*result)[i] = '\0';
}

//	 This time we needed to use a char pointer array
//	 to store the progress of read() in multiple files
//	 MAX_FILES_OPENED is the locked-in-memory size
//	 obtained through the command "ulimit -a"

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FILES_OPENED];
	char		*result;
	char		*buffer;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes = 1;
	while (ft_strchr(stash[fd], '\n') == NULL
		&& bytes > 0)
		bytes = read_buffer(fd, &(stash[fd]), buffer);
	free(buffer);
	if (bytes == -1)
		return (NULL);
	if (ft_strlen(stash[fd]) == 0)
		return (NULL);
	get_result(&(stash[fd]), &result);
	remove_result(&(stash[fd]));
	return (result);
}
