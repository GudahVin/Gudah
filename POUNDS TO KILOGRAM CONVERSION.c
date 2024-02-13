#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start ,end ,increment ,Pounds ,Kilograms;
    printf("Enter Pounds start value: ");
    scanf("%f", &start);
    printf("Enter Pounds end value: ");
    scanf("%f", &end);
    printf("Enter the Pounds increment value: ");
    scanf("%f", &increment);
    printf("\n Pounds\t\t Kilograms\n");

    for (Pounds = start; Pounds <=end; Pounds +=increment)
    {
        Kilograms = Pounds * 0.453592;
        printf("%6.2f\t\t%6.2f\n", Pounds, Kilograms);
    }

    return 0;
}
