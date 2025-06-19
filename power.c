#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("The square of this number is %.2f",pow(num,2));

    return 0;
}