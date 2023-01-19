#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>         // DIR, dirent, opendir, readdir, closedir

int main(int argc, char *argv[])
{

    DIR *dir;
    struct dirent *sd;

    dir = opendir("..");

    if (dir == NULL)
    {
        printf("Error! Unable to open directory.\n");
        exit(1);
    }

    while ((sd=readdir(dir)) != NULL )
    {
        printf(">> %s\n", sd->d_name);
    }

    closedir(dir);

    return 0;
}