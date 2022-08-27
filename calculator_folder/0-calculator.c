#include <stdio.h>
#include <stdlib.h>


int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

void fact();
void even_odd();
int main()
{
    int choice, num1, num2, sum1, sub1,mul1,div1;
    printf("Press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for factorial\n");
    printf("press 6 for even/odd\n");
    scanf("%d", &choice);
    
    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);
    
    switch(choice)
    {
        case 1:
        sum1 = add(num1, num2);
        printf("the sum is: ", sum1);
        break;
        
        case 2:
        sub1 = sub(num1, num2);
        printf("the sub is: ", sub1);
        break;
        
        case 3:
        mul1 = mul(num1, num2);
        printf("the mul is: ", mul1);
        break;
        
        case 4:
        div1 = div(num1, num2);
        printf("the div is: ", div1);
        break;
        
        case 5:
        fact();
        break;
        
        case 6:
        even_odd();
        break;
    }
}
//Addition
int addition(int x, int y)
{
    int z;
    z = x+y;
    return (z);
}
//subtraction
int subtraction(int x, int y)
{
    int z;
    z = x-y;
    return (z);
}
//multiplication
int multiplication(int x, int y)
{
    int z;
    z = x*y;
    return (z);
}
//division
int division(int x, int y)
{
    int z;
    z = x/y;
    return (z);
}
//factorial
void fact()
{
    int x, y, factorial=1;
    printf ("Enter the value: ");
    scanf ("%d", &x);
    
    for(y=1;y<=x;y++)
    factorial = factorial * y;
    printf ("Your factorial is = %d", factorial);
}
//even_odd
void even_odd()
{
    int x;
    printf ("Enter the value:");
    scanf("%d", &x);
    
    if(x%2==0)
    printf("even number\n");
    else
    printf("odd number\n");
}





