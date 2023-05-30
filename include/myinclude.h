#include <stdio.h>
#include <string.h>

int f()
{
    char c1[100]= "Hello world";
    char c2[100]= ", I am <your name here>";
    printf("%s\n", strcat(c1, c2));
    printf("Change number 1");
    return 0;
}