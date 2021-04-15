#include<stdio.h>
#include "fun.h"
int top;
int pop(int stack[])
{
    if(top==-1)
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}