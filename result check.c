#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter the number :");
    scanf("%d",&num);
    int sum=0;
    while(num>=10)
    {
        n=num%10;
        num=num/10;
        sum=sum+n;
    }
    sum=sum+num;
    printf("The sum is %d",sum);

    return 0;
}