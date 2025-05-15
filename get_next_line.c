#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char *str;
    char buff[BUFFER_SIZE];
    static int index;

    str = buff;
    while(index >  0)
    {
      index = read(fd, buff, sizeof(buff));
      if (index == -1)
        return (buff);
      if (index == 0)
        return (NULL);
      if (*buff == "\n")
      {
        str = ft_strjoin(buff, '\n');
        return (str);
      }
    }
}
