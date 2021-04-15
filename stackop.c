#include<stdio.h>
#include <fun.h>
int top=-1;
int main()
{
    int stack[5]={};
    int i;
    push(stack,1,5);
    push(stack,2,5);
    push(stack,1,5);
    push(stack,2,5);
    push(stack,1,5);
    push(stack,9,5);
    if(checkpalindrome(stack,5))
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    printf("Top Element %d",topelement(stack));
    for(i=0;i<5;i++)
    {
        printf("\n Popped Element %d",pop(stack));
    }
    pop(stack);


    return 0;
}