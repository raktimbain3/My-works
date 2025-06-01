#include <stdio.h>
int main()
{
    int a;
    printf("Enter array size:");
    scanf("%d",&a);
    
    int ary[a];
    int totalodd=0,totaleven=0;
    printf("Enter array elements:");
    for(int i=0; i<a; i++)
    {
        scanf("%d",&ary[i]);
    }
    for(int i=0; i<a; i++)
    {
        if(ary[i]%2==0)
        {
            totaleven++;
        }
        else 
        {
            totalodd++;
        }
        
    }

printf("Total even number = %d\n",totaleven);
printf("Totaal odd number = %d",totalodd);
return 0;
}