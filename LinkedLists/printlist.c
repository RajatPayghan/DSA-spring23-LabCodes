#include <stdio.h>
#include<stdlib.h>
#include "nodedef.h"
#include"functions.h"

void printList(LIST l)
{
  NODE temp;
  temp = (NODE)malloc(sizeof(NODE));
  temp = l->head; 
  while (temp != NULL)
  {
    printf("%d - ", temp->value);
    temp = temp->next;
  }
  printf("\n");
}