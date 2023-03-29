#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "stack.h"
#include "linked_list.h"
#include <stdbool.h>

Stack *newStack(){return createNewList;}

bool push(Stack *s, Element element){insertFirstElement(element,s); return true;}

Element *top(Stack *stack){return stack->head;}

Element *pop(Stack *stack)
{
  NODE temp = stack->head;
  removeFirstNode(stack);
  return temp;
}

bool isEmpty(Stack *stack){return stack->count==0;}

