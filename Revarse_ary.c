#include <stdio.h>
int main()
{
   int ary1[]={1,2,3,4,5,6,7,8,9,10};
   int len=10;
   int temp;
   for(int i=0; i<(len/2);i++)
   {
     temp=ary1[i];
     ary1[i]=ary1[len-i-1];
     ary1[len-i-1]=temp;
   }
   for(int i=0; i<len; i++)
   {
    printf("%d ",ary1[i]);
   }
}