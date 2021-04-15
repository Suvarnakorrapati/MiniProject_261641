#include<stdio.h>
#include "fun.h"
int top;
void push(int stack[],int n,int size)
{
    if(top==size-1)
    {
        printf("Stack OVerflow\n");
    }
    else
    {
        stack[++top]=n;
    }
}