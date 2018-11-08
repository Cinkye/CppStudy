// Exercise 3.2 Date Transformer
#include <stdio.h>
#include <string.h>

int main(void)
{
    int day = 0;
    int month = 0;
    int year = 0;
    int modulus = 0;
    char stmonth[10];

    printf("Input the day.\n");
    scanf("%d",&day);
    printf("Input the month.\n");
    scanf("%d",&month);
    printf("Input the year.\n");
    scanf("%d",&year);


    if (modulus == 0 || modulus == 1 || modulus == 2 || modulus == 3 || modulus == 4 || modulus == 5 || modulus == 6 || modulus == 7 || modulus == 8 || modulus == 9)
    switch(modulus)
    {
    case 1:
        char stday[2] = "st";
    break;
    case 2:
        char stday[2] = "nd";
    break;
    case 3:
        char stday[2] = "rd";
    break;
    default:
        char stday[2] = "th";
    break;
    }
    else
        printf("You did not input correctly.");


    switch(month)
    {
    case 1:
        char stmonth[12] = "January";
    break;
    case 2:
        char stmonth[12] = "February";
    break;
    case 3:
        char stmonth[12] = "March";
    break;
    case 4:
        char stmonth[12] = "April";
    break;
    case 5:
        char stmonth[12] = "May";
    break;
    case 6:
        char stmonth[12] = "June";
    break;
    case 7:
        char stmonth[12] = "July";
    break;
    case 8:
        char stmonth[12] = "August";
    break;
    case 9:
        char stmonth[12] = "September";
    break;
    case 10:
        char stmonth[12] = "October";
    break;
    case 11:
        char stmonth[12] = "November";
    break;
    case 12:
        char stmonth[12] = "December";
    break;
    default:
        printf("You did not input correctly.\n");
    }

    printf("The date is %d%c %c %d.\n",day,stday,stmonth,year);
    return 0;

}
