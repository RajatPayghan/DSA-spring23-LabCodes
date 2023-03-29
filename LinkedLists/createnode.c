#include <stdio.h>
#include<stdlib.h>
#include "nodedef.h"
#include"functions.h"

NODE createNode(int v)
{
  NODE temp;
  temp = (NODE) malloc(sizeof(struct node));
  temp->value = v;
  temp->next = NULL;
  return temp;
}