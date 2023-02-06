#include <stdio.h>
#include<stdlib.h>
#include "nodedef.h"
#include"functions.h"

void appendNode(NODE n, LIST l)
{
  NODE temp;
  temp = (NODE)malloc(sizeof(NODE));
  if (l->count==0)
  {
    l->head = n;
    n->next = NULL;
    l->count++;
  }
  else
  {
    // temp->next = l->head;
    temp = l->head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    l->count++;
  }
}