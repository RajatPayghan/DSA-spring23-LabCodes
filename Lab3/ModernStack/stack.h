#ifndef STACK_H
#define STACK_H

#include "element.h"
#include "linked_list.h"
#include <stdbool.h>

struct stack{LIST l;};
typedef struct linked_list Stack; // Stack is a pointer to a struct stack

//  ------------- Functions ------------

Stack *newStack(); 
  // Returns a pointer to a new stack. Returns NULL if memory allocation fails

bool push(Stack *stack, Element element); 
  // Pushes element onto stack. Returns false if memory allocation fails

Element top(Stack *stack);
  // Returns the top element. Returns NULL if stack is empty

Element pop(Stack *stack);
  // Pops the top element and returns true. Returns false if stack is empty

bool isEmpty(Stack *stack);
  // Returns true if stack is empty. Returns false otherwise

void freeStack(Stack *stack); 
  // Frees all memory associated with stack

#endif