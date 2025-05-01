#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *str;
    char buff[100];
    int index;

    while(fd)
    {
        index = read(fd, buff, sizeof(buff));
        if (index == -1)
            return (buff);
        while (index != '\n')
        {
          if (index == '\n')
          {
            str = ft_strcat(buff, "\n");
            return (str);
          }
          index++;
        }
        if (index == 0)
          return (buff);
    }
    free(str);
}

