#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char *str;
    static char buff[BUFFER_SIZE];
    int index;

    if (fd <= 0 || BUFFER_SIZE <= 0)
      return (NULL);
    index = 1;
    str = NULL;
    while(index >  0)
    {
      index = read(fd, buff, BUFFER_SIZE);
      if (index < 0)
        return (NULL);
      
    } 
}
