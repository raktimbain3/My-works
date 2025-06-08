#include <stdio.h>
int sum_function(int x, int y);
void table(int a);
int main()
{
    int a,b,c,d;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("The sum of these number is %d\n",sum_function(a,b));
    printf("Enter a different number:");
    scanf("%d",&c);
    printf("Total sum is %d\n",sum_function(a,b)+c);
    printf("Enter a number for it's Table:");
    scanf("%d",&d);
    table(d); // argument / actual parameter

 return 0;
}

int sum_function(int x, int y) // parameter
{
    int sum;
    sum = x + y;
   
    return sum;
}

void table(int a) // parameter / formal parameter
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
}