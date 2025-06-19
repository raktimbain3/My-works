#include <stdio.h>
#include <math.h>
int calculate_area_square(int a);
double calculate_area_circle(int a);
double calculate_area_rectengle(int a, int b);
int main()
{
    int num1, num2, num3, num4;
    printf("Enter the width of the square:");
    scanf("%d",&num1);
    printf("The area of the square is %d\n",calculate_area_square(num1));

    printf("\nNow enter the redius of the circle:");
    scanf("%d",&num2);
    printf("The area of the circle is %.2f\n",calculate_area_circle(num2));

    printf("\nNow enter the height of the rectengle:");
    scanf("%d",&num3);
    printf("And the width:");
    scanf("%d",&num4);

    printf("The area of the rectengle is %.2f",calculate_area_rectengle(num3,num4));

    return 0;
}

int calculate_area_square(int a)
{
  int sq;
  sq=pow(a,2);

  return sq;
}

double calculate_area_circle(int a)
{
    float cr;
    cr=3.1416*pow(a,2);

    return cr;
}

double calculate_area_rectengle(int a, int b)
{
   float re;
   re=0.5*a*b;

   return re;
}