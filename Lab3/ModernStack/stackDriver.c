#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "element.h"
#include "stack.h"

void populateElement();
Element itre[10];
int main()
{
  // Initialisation
  Stack *s = newStack();
  populateElement();
  Element e;

  // Checking Emptiness
  if (isEmpty(s)){printf("Empty Stack\n");}
  else{printf("Stack is Populated\n");}

  // Populate Elements
  for (int i = 0; i < 10; i++)
  {
    push(s, itre[i]);
  }

  // Functions
  printf("\n---- After Populating ----\n");
  e = top(s);
  printList(s);
  printf("\nLast Element has values %d and %f\n", e.int_value,e.float_value);
  e = pop(s);
  printList(s);
  printf("\nAfter Pop : Popped Element has values %d and %f\n", e.int_value,e.float_value);
  e = top(s);
  printf("\nAfter Pop : Top Element has values %d and %f\n", e.int_value,e.float_value);

  printf("\n");
}

void populateElement()
{
  for (int i = 0; i < 10; i++)
  {
    Element e;
    e.int_value = i;
    e.float_value = i+0.1;
    itre[i] = e;
  }
}