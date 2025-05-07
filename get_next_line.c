#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char *str;
    char buff[100];
    static int index;

    str = buff;
    while(buff)
    {
      index = read(fd, buff, sizeof(buff));
      if (index == -1)
      return (buff);
      while (buff != '\n')
      {
        if (buff == '\n')
        {
          str = ft_strcat(buff, "\n");
          return (str);
        }
        
      }
      if (index == 0)
      return (NULL);
    }
    free(str);
  }
  
  get_file_for_testing()
  {
    int fd = open("text.txt", O_RDONLY);
    get_next_line(fd);
  }
