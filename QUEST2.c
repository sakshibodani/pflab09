#include <stdio.h>
void deposit(float *bal, int index, float amount) 
{
    *(bal+index)+= amount;   
}
void withdraw(float *bal, int index, float amount) 
{
    if (*(bal+index)>= amount)
        *(bal+index)-= amount;   
    else
        printf("Insufficient Balance..\n");
}
float avg(float *bal)
{
    float sum = 0;
    int i;
    for (i = 0; i < 5; i++) 
	{
        sum += *(bal + i);
    }
    return sum /5;
}
void display(float *bal) 
{
    printf("\n***Account Balances\n");
    int i;
    for (i=0; i < 5; i++)
	{
        printf("Account %d: %.2f\n", i + 1, *(bal + i));
    }
}

int main() 
{
    float balance[5] = {1000, 1500, 2000, 500, 750};
    display(balance);
    deposit(balance, 0, 500);       
    withdraw(balance, 2, 300);      
    display(balance);
    float Avg = avg(balance);
    printf("\nAverage Balance: %.2f\n", Avg);
}

