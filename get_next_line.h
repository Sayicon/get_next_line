#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <sys/types.h>

#define BUFFER_SIZE 1000

char	*get_next_line(int fd);

#endif