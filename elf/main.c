#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{

    if (!argv[1])
    {
        fprintf(stdout, "\033[31mUsage: elfparse [FILE]\n");
        exit(1);
    }

    int fd;

    if ((fd = open(argv[1], O_RDONLY) < 0))
    {
        perror("Failed to open file");
        exit(1);
    }

    /* Do stuff with file here... */
    lseek(fd, 0, SEEK_CUR);
    

    close(fd);

    return 0;
}
