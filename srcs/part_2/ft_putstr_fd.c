#include<stdio.h>
#include <fcntl.h>

void ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		read(fd, &str[i], 1);
		i++;
	}
}