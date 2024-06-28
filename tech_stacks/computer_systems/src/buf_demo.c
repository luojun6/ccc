#include <stdio.h>
#include <stdlib.h>


void echo()
{
  char buf[4];      /* Way too small! */
  gets(buf);
  puts(buf);
}

int main(int argc, char **argv)
{
    echo();
    
    return 0;
}