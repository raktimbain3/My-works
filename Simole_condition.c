#include <stdio.h>
void ind();
void fri();
int main()
{ 
    char a;
    printf("Enter your Nationality 'i' for Indian, 'f' for French:");
    scanf("%c",&a);
    if(a=='i')
    {
        ind();
    }
    else if(a=='f')
    {
        fri();
    }
    else
    {
        printf("Wrong input");
    }

}
void ind()
{
    printf("Namaste\n");
};
void fri()
{
    printf("Bonjour\n");
};
