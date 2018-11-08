// Program 4.5 Summing integers backward
#include <stdio.h>
int main(void)
{
    unsigned long long sum = 0LL;
    unsigned long long count = 0;

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum:");
    scanf("%u",&count);

    // Sum integers from count to 1
    for (unsigned int i = count ; i >= 1 ; sum += i--);

    printf("\nTotal of the first %u numbers is %llu\n",count,sum);
    return 0;
}
