#include <stdio.h>
#include <sys/types.h>  // open
#include <sys/stat.h>   // open
#include <fcntl.h>      // open
#include <unistd.h>     // write, read
#include <stdlib.h>     // write, read

int main(int agrc, char *argv[])
{

    int fd;
    char buf[16];

    /* write */
    // int open(const char *pathname, int flags, mode_t mode);
    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
    if(fd == -1) 
    {
        printf("Failed to create and open the file.\n");
        exit(1);
    }
    
    // ssize_t write(int fd, const void *buf, size_t count);q
    write(fd, "Hello World!\n", 13);
    close(fd);

    /* read */
    fd = open("myfile.txt", O_RDONLY);
    if(fd == -1) 
    {
        printf("Failed to open and read the file.\n");
        exit(1);
    }

    // ssize_t read(int fd, void *buf, size_t count);
    read(fd, buf, 13);
    buf[13] = '\0';

    close(fd);
    printf("buf: %s\n", buf);

    return 0;
}

// root user group

// 0    No permission                   ---
// 1    execute permission              --x
// 2    write permission                -w-
// 3    Execute and write permission    -wx
// 4    Read permission                 r--
// 5    Read and execute permission     r-x
// 6    Read and write permission       rw-
// 7    All permissions                 rwx