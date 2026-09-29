#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for  (int k=7; k<= 100; k +=7)

    {
        sum = sum + k;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
