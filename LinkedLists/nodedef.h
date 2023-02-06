#ifndef NODE_H
#define NODE_H

#include <stdio.h>

struct node{
  int value;
  struct node* next;
};

typedef struct node* NODE;

struct linkList
{
  int count;
  NODE head;
};

typedef struct linkList* LIST;

#endif