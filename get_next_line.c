#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

char *get_next_line(int fd)
{
    char *str;
    char buff[100];
    char *read_line;

    str = malloc(buff);
    while(fd)
    {
        read_line = read("good.txt", buff, 100);
        if (read_line == -1)
            return (buff);
        if (read_line == '\n')
        {
            str = strcat(buff, "\n");
            return (str);
        }
    }
    free(str);
}

