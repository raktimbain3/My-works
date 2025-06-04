#include <stdio.h>
int main()
{
   int a;
 int ar[2]={1,2};

   a=ar[0];
   ar[0]=ar[1];
   ar[1]=a;
   printf("%d",ar[0]);

    return 0;
}