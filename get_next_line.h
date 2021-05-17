#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	copies_memory(char *src, char *dest, int n, int term, int clean);
int	reads_content(int fd, char **line, char *buffer);
int	get_next_line(int fd, char **line);
