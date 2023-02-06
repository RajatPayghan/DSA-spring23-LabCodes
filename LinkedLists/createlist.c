#include <stdio.h>
#include <stdlib.h>
#include "nodedef.h"
#include "functions.h"

LIST createList()
{
  LIST temp;
  temp = (LIST)malloc(sizeof(LIST));
  temp->count = 0;
  temp->head = NULL;
  return temp;
}