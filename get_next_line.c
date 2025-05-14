#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char *str;
    char buff[100];
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
        str = ft_strcat(buff, '\n');
        return (str);
      }
    }
}
