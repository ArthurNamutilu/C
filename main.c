#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fName []= "Arthur";   // [] tells we store bunch of characters
    int age = 23;
    printf("Hello %s!\n", fName);  // %s place holder where a string will be inserted
    printf("You age is %d years old\n", age);
    return 0;
}
