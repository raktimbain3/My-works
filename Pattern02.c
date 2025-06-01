#include <stdio.h>
int main()
{
  int a,row,col;
  printf("Enter number :");
  scanf("%d",&a);

  for(row=1;row<=a;row++)
  {
    for(col=1;col<=row;col++)
    {
      printf("%c ",row+64);
      
    }
    printf("\n");
  }
}
