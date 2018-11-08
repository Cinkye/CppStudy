//Exercise 3.3 Calculating Discount
#include <stdio.h>

int main()
{
    float discount = 0;
    int number = 0;
    float price = 0;

    printf("Input the number.\n");
    scanf("%d",&number);
    if (number > 30)
        {
        if (number > 50)
            discount = 0.15;
        else
            discount = 0.1;
        }
    price = number * 5 * ( 1 - discount );
    printf("The price is %.2f.\n",price);
    return 0;
}
