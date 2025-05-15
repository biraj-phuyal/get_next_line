#include "get_next_line.c"
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *buff)
{
  int i;

  i = 0;
  while (buff[i])
    i++;
  return (i);
}

char *ft_strjoin(char *buff, char c)
{
  int i;
  char *string;
  int j;
  
  i = ft_strlen(buff);
  string = (char)malloc(i);
  if (!string)
    return (NULL);
  j = 0;
  string = buff;
  while (string[j] < i + 1)
  {
    if (string[j] == i)
      string[j] = c;
    j++;
  }
  return (string);
  free(string);
}

int check_newline(char *buff)
{
  int i;
  
  i = 0;
  while (buff[i])
  {
    if (buff[i] == '\n')
      return (1);
    i++;
  }
  return (0);
}