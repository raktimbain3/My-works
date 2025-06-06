#include <stdio.h>
int sum_function(int x, int y);
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("The sum of these number is %d\n",sum_function(a,b));
    printf("Enter a different number:");
    scanf("%d",&c);
    printf("Total sum is %d",sum_function(a,b)+c);

 return 0;
}

int sum_function(int x, int y)
{
    int sum;
    sum = x + y;
   
    return sum;
}