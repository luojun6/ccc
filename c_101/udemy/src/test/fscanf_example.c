#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if (fp != NULL)
        fputs("Hello how are you", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Reading string1 |%s|\n", str1);
    printf("Reading string2 |%s|\n", str2);
    printf("Reading string3 |%s|\n", str3);
    printf("Reading integer |%d|\n", year);

    fclose(fp);

    return 0;
}