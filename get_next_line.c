#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

char *get_next_line(int fd)
{
    char *str;
    int buff;
    char *read_line;

    buff = 600;
    str = malloc(sizeof(char) * (buff));
    while(read(fd, str, buff))
    {
        read_line = str;
        if (str == NULL)
            return (NULL);
        if (read_line == '\n')
        {
            read_line = strcat(read_line, "\n");
            return (read_line);
        }
    }
    free(str);
}

