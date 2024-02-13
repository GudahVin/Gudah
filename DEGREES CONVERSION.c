#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start ,end ,increment ,degreesF ,degreesC;
    printf("Enter degreesF start value: ");
    scanf("%f", &start);
    printf("Enter degreesF end value: ");
    scanf("%f", &end);
    printf("Enter the degreesF increment value: ");
    scanf("%f", &increment);
    printf("\n degreesF\t degreesC\n");

    for (degreesF = start; degreesF <=end; degreesF +=increment)
    {
        degreesC = (degreesF - 32) * 5 / 9;
        printf("%6.2f\t\t%6.2f\n", degreesF, degreesC);
    }

    return 0;
}
