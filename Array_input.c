#include <stdio.h>
int main()
{
    int a;
   
    printf("enter array size:");
    scanf("%d",&a);
    int ar[a];
    printf("Enter array elements:");
    for(int i=0; i<a; i++)
    {
      scanf("%d",&ar[i]);
    }
    int ar2[a];
    for(int i=0; i<a; i++)
    {
        ar2[i]=ar[i];
    }
    for(int i=0; i<a; i++)
    {
        printf("%d ",ar2[i]);
    }
    return 0;
}