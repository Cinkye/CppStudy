//Exercise 3.1 A Temperature Transformer
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char function = 0;
    float temperature = 0.0;

    printf("Input F for Farenheit.Input C for Celsius.\n");
    scanf("%c",&function);
    switch(toupper(function))
    {
    case 'F':
        printf("Input the temperature.\n");
        scanf("%f",&temperature);
        temperature = temperature * 1.8f + 32.0f;
        printf("The temperature in Farenheit is %.2f F.\n",temperature);
    break;
    case 'C':
        printf("Input the temperature.\n");
        scanf("%f",&temperature);
        temperature = (temperature - 32.0f) / 1.8f;
        printf("The temperature in Celsius is %.2f C.\n",temperature);
    break;
    default:
        printf("You didnot input correctly.");
    break;



    }
    return 0;
}
