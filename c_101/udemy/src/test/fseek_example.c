#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "w+");
    fputs("This is JunLuo.", fp);

    fseek(fp, 8, SEEK_SET);
    fputs("Hello how are you", fp);

    fclose(fp);

    return(0);
}