#include "fun.h"
int checkpalindrome(int stack[],int size)
{
    int i,temp[size];
    for(i=0;i<size;i++)
    {
        temp[i]=stack[i];
    }
    for(i=0;i<size;i++)
    {
        if( pop(stack)!=temp[i])
        {
            return 0;
        }
        return 1;

    }


}