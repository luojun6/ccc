#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO=9, EBAY, MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    enum Company yahoo = YAHOO;
    enum Company microsoft = MICROSOFT;

    printf("The value of xerox is: %d\n", xerox);
    printf("he value of google is: %d\n", google);
    printf("he value of ebay is: %d\n", ebay);
    printf("he value of yahoo is: %d\n", yahoo);
    printf("he value of microsoft is: %d\n", microsoft);

    return 0;
}