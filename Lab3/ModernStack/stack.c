#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "stack.h"
#include "linked_list.h"
#include <stdbool.h>

Stack *newStack()
{
  Stack *s;
  s = (Stack*)malloc(sizeof(Stack));
  s = createNewList();
  return s;
}

bool push(Stack *s, Element element){
  NODE node = createNewNode(element);
  insertNodeIntoList(node, s); 
  return true;
}

Element top(Stack *stack){return stack->head->data;}

Element pop(Stack *stack)
{
  NODE temp = stack->head;
  removeFirstNode(stack);
  return temp->data;
}

bool isEmpty(Stack *stack){return stack->count==0;}

