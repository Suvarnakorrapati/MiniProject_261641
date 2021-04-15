#include<stdbool.h>
/**
 * @file fun.h
 * @author Suvarna
 * @brief Header file for stack operations
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUN_H__
#define __FUN_H__

/**
 * @brief Function to push the element into stack
 * 
 * @param stack Array in which the input is stored
 * @param n Number to be pushed
 * @param size Size of input stack
 */
void push(int stack[],int n,int size);

/**
 * @brief Function to pop the element from the stack
 * 
 * @param stack Array in which the input is stored
 * @return int popped out element
 */
int pop(int stack[]);

/**
 * @brief Function to return the top element in the stack
 * 
 * @param stack Array in which the input is stored
 * @return int Top element in the stack is returned
 */
int topelement(int stack[]);


/**
 * @brief Function to check whether a number is palindrome or not
 * 
 * @param stack Array in which the input is stored
 * @param size Size of input stack
 * @return int Returns 0 if not palindrome Returns 1 if palindrome
 */
int checkpalindrome(int stack[],int size);

#endif /* __FUN_H__  */
