#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account;
    float creditLimit, balance,newLimit;
    for(int i=1;i<=3;i++)
    {
        printf("Customer %d\n",i);
        printf("Enter account number: ");
        scanf("%d",&account);
        printf("Enter credit limit: ");
        scanf("%f",&creditLimit);

        printf("Enter current balance: ");
        scanf("%f", &balance);

        newLimit= creditLimit/2.0;

        printf("Account %d: new credit limit is UGX%.2f\n",account,newLimit);

        if(balance>newLimit)
        {
            printf("Account %d: balance (UGX%.2f) EXCEEDS the new credit limit\n", account,balance);
        }
        printf("\n");
    }
    return 0;
}
