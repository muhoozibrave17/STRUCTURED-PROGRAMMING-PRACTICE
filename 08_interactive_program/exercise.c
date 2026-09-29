#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sales , earnings;
    printf("Enter sales in dollars(-1 to end) : ");
    scanf("%1f", &sales);

    while (sales!=-1.0) {
        if (sales<0){
            printf("Error :Salary cannot be negative!\n\n");
        }
        else{
            earnings=200.0+(sales*0.09);
            printf("Salary is :$%.2f\n\n",earnings);
        }

        printf("Enter sales in dollars (-1 to end) : ");
        scanf("%1f",&sales);
    }
    return 0;
}
