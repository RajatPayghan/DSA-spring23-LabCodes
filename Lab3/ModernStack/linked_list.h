#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "element.h"

struct node
{
    Element data;
    struct node *next;
};
typedef struct node node;
typedef node * NODE;

struct linked_list
{
    int count;
    NODE head;
    // NODE tail; For Queue
};
typedef struct linked_list linked_list;
typedef linked_list * LIST;

LIST createNewList();

NODE createNewNode(Element data);

void insertNodeIntoList(NODE node, LIST list);

void removeFirstNode(LIST list);

void printList(LIST l);

// void insertNodeAtEnd(NODE node, LIST list); 
// Not required for stack. Required for Queue
// This function inserts a node at the end of the list.

void destroyList(LIST list);

#endif