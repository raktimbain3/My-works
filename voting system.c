#include<stdio.h>
# define candidate 3
int votes[candidate]={0};
char name[candidate][30]={"Rokibul","Toufik","Luban"};
void vote();
void Display_vote();
void Leading_position();
int main()
{
    int option;
    do
{   printf("1.Vote\n2.Display vote\n3.See leading position\n4.Exit.\n");
    printf("Choose your option:");
    scanf("%d",&option);
    if(option<1 || option>4)
    {
        printf("Wrong input");
        return 1;
    }
    
    switch (option)
    {
    case 1:
        vote();
        break;
    case 2:
        Display_vote();
        break;
    case 3:
        Leading_position();
        break;
    default:
        printf("Exiting....");
        break;
    }
}
    while(option!=4);

}

void vote()
{
    int choice;
    printf("Candidates are:\n1.Rokibul\n2.Toufik\n3.Luban\nEnter vote:");
    scanf("%d",&choice);
    if(choice<1 || choice>candidate)
    {
        printf("Wrong choice.Try again.");
        return ;
    }
    votes[choice-1]++;
    printf("Thanks for voting %s.\n",name[choice-1]);

}
void Display_vote()
{
    for(int i=0; i<candidate; i++)
    {
        printf("Total votes of %s : %d\n",name[i],votes[i]);
    }
}
void Leading_position()
{
    int max=votes[0] ;
    int leader=0;
     for(int i=1; i<candidate; i++)
    {
        if(max<votes[i])
        {
            max=votes[i];
            leader=i;
        }
    }
    printf("The leader is %s for getting %d votes.Thanks to all.\n",name[leader],max);
}