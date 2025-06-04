#include <stdio.h>
#include<string.h>
int main()
{
  int len1,len2;
  char str1[100],str2[100];
  printf("Enter a Sentence:");
  gets(str1);
  printf("Enter another sentence:");
  gets(str2);
 
  printf("%s\n",str1);
  printf("%s\n",str2);

  len1=strlen(str1);
  len2=strlen(str2);

  printf("The length of the 1st sentense is %d\n",len1);
  printf("The length of the 2nd sentense is %d\n",len2);
  char new[100];
  printf("The greater sentense is :");
  if(strcmp(str1,str2)>0)
  {
    printf("%s\n",str1);
    strcat(str2,str1);
    printf("%d\n",str2);
    strcpy(new,str2);
   
  }
  else
  {
   printf("%s\n",str2);
   strcat(str1,str2);
   printf("%s\n",str1);
   strcpy(new,str1);
   
  }
   

  return 0;
}