#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H


#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char *get_next_line(int fd);
int ft_strlen(char *buff);
char *ft_strjoin(char *buff, char c);

# endif