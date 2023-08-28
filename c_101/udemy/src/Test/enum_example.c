#include <stdio.h>

int main(void)
{

    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    // bool isMale = (myGender == anotherGender);
    printf("myGender: %d\n", myGender);

    return 0;
}