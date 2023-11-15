#include <stdio.h>
#include <stdbool.h>

int len(const char * str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        ++count;
    }
    
    return count;
}

char * concat(const char* str1, const char* str2, char* result)
{
    int len1 = len(str1);
    int len2 = len(str2);
    int len3 = len1 + len2;

    
    int count = 0;
    while(str1[count] != '\0')
    {
        result[count] = str1[count];
        ++count;
    }

    count = 0;
    while(str2[count] != '\0')
    {
        result[count + len1] = str2[count];
        ++count;
    }

    return result;
}

bool cmp(const char* str1, const char* str2)
{
    int len1 = len(str1);
    int len2 = len(str2);
    bool result = false;
    if (len1 != len2)
        return result;
    for (int i = 0; i < len1; i++)
    {
        if (str1[i] != str2[i])
            return result;
    }

    result = true;
    return result;
}

int main(void)
{
    const char * str = "Hello World!";
    printf("Length of \"%s\": %d\n", str, len(str));

    const char * str1 = "Hello";
    const char * str2 = " World!";
    char str3[100];
    char * result = concat(str1, str2, str3);
    printf("Result of concat: %s\n", result);
    printf("Result of cmp(str1, str2): %d\n", cmp(str1, str2));
    printf("Result of cmp(str1, str1): %d\n", cmp(str1, str1));
    return 0;
}