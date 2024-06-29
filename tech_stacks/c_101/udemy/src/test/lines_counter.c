#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fp = NULL;
    int lc = 0;
    char str[40];

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file");
        return(-1);
    }

    while( fgetc(fp) != EOF)
    {
        // fgets(str, sizeof(str), fp);
        // printf("%s\n", str);
        lc++;
    }

    printf("Line counts: %d\n", lc);

    fclose(fp);

    return 0;
}