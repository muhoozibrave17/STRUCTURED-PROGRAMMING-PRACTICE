#include <stdio.h>
#include <stdlib.h>

int main()
{
     for(int j =1;j <= 13; j+=2)
     {
         printf("%d",j);
         if (j< 13)
            printf(", ");
     }
    return 0;
}
