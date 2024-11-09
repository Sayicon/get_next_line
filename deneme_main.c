#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// int	fd1, fd2;

	// fd1 = open("../ornek.txt", O_RDONLY);
	// fd2 = open("../ornek1.txt", O_RDONLY);
	// printf("%s", get_next_line(fd1));
	// printf("%s", get_next_line(fd1));
	// printf("%s", get_next_line(fd1));
	// printf("%s", get_next_line(fd2));
	// printf("%s", get_next_line(fd2));
	// printf("%s", get_next_line(fd2));

	char	*ptr = (char *)malloc(1);
	ptr[0] = 'a';
	ft_realloc(ptr, 2);
	ptr[1] = 'b';
	printf("%c\n", ptr[0]);
	printf("%c\n", ptr[1]);
	

}