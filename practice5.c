#include <stdio.h>
#include <string.h>
int main()
{
  int a,b; 
 char r[1000],s[1000]="I_am_";
 fgets(r,sizeof(r),stdin);
 a=strlen(r);
 puts(r);
 
 printf("THE LENGTH OF THIS STRING IS %d\n",a);
puts(s);
strcmp(s,r);
printf("%s",s);
 return 0;

}