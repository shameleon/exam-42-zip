#include <unistd.h>
#include <stdio.h>


int main(int argc, char **argv)
{
    size_t  fd;
    char    *str;

    if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);        
        if (fd > 0 || read (fd, str, 0) < 0)
            break;
        close(fd);
        free (str);
    }
    write (1, "\n", 1);
    return (0);
}