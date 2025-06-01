#include<stdio.h>
int main()
{
int num;
printf("Enter your marks :");
scanf("%d",&num);

if(num>=40 && num<=100)
{printf("passed..\n");}
else if(num>=0 && num<=40)
{printf("failed..\n");}

else {printf("you have entered a wromg number...\n");}

printf("Thank you..");

// num>=40 && num<=100 ? printf("passed") : printf("failed");

return 0;

}