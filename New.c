//Exercise 2.1
#include <stdio.h>
#include <math.h>
int main(void)
{
    long length = 0.0L;
    long yard = 0.0L;
    long inch = 0.0L;
    long feet = 0.0L;

    printf("Input the length in feet.");
    scanf("%ld",&length);

    yard = floor(length/12);
    inch = floor((length-yard*12)/3);
    feet = length-yard*12-inch*3;

    printf("The length is %ld yard(s) %ld inch(es) %ld feet.",yard,inch,feet);
    return 0;

}
