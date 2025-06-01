#include <stdio.h>

int main() {
    int age, premium,price;
    
     printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter premium or not (1 for Yes, 0 for No): ");
    scanf("%d", &premium);

    if (age >= 0 && age <= 5)
    {price = 0;} 
    
    else if (age >= 6 && age <= 13)
    {price = 20;} 
   
    else if (age >= 14 && age <= 19) 
    {price = 25;} 
    
    else if (age >= 20) 
    {price = 30;}
    
    if (premium == 1 && price > 0) {
        price = price - 5;
    }
    printf("Ticket price: %d\n", price);

    return 0;
}