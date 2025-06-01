#include <stdio.h>
int main()
{
    int a;
    printf("Enter array size:");
    scanf("%d",&a);
    int ary[a];
    
    for(int i=0;i<a;i++)
    {
        printf("Enter array number %d:",i+1);
        scanf("%d",&ary[i]);
    }
    int maxi=ary[0],mini=ary[0];
    for(int i=0;i<a;i++)
    {
        if(mini>ary[i])
        {
            mini=ary[i];
        }
        if(maxi<ary[i])
        {
            maxi=ary[i];
        }
        
    }
    
printf("maximumm number is %d\n",maxi);
printf("Minimum number is %d",mini);

}
