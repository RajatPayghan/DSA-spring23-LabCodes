#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

LIST createNewList()
{
  LIST temp;
  temp = (LIST)malloc(sizeof(LIST));

  temp->count = 0;
  temp->head = NULL;

  return temp;
}

NODE createNewNode(Element d)
{
  NODE temp;
  temp = malloc(sizeof(NODE));

  temp->data = d;
  temp->next = NULL;
  return temp;
}

void insertNodeIntoList(NODE node, LIST list)
{
  NODE tmptr; //Create a temporary pointer
  tmptr = malloc(sizeof(NODE)); // Allocate it memory
  list->count++; 

  if (list->head==NULL)
  {
    list->head = node; 
    // If head points to null then head will point to 'node'
  }
  else
  {
    tmptr = list->head; // Temporary pointer value is address of first node
    while (tmptr->next != NULL)
    {
      // As the value of next pointer is not null
      tmptr = tmptr->next; 
      // Value of tmptr is next node
    }
    tmptr->next = node; 
    // At last, now value of next ptr is NULL
    // So we assign node to the next of last node
    node->next = NULL;
    // Make the last node point to null
  }
}

void printList(LIST l)
{
  NODE node_ptr; // Create a node pointer
  node_ptr = l->head; //node pointer value is first node
  if (node_ptr == NULL){printf("List is empty");}
  // If node pointer is zero then Print empty list
  else
  {
    while (node_ptr->next!= NULL) // While node has a next node
    {
      printf("%d-",node_ptr->data.int_value); // Print the int value
      node_ptr = node_ptr->next; // Value of Pointer is pointer to next node
    }
    printf("%d-NULL",node_ptr->data.int_value); // Print the value of last node
    printf("\n");
  }
}

void removeFirstNode(LIST list)
{
  NODE temp = list->head;
  list->head = temp->next;
  list->count--;
}

void insertFirstElement(Element e, LIST l)
{
  NODE newNode;
  newNode = (NODE)malloc(sizeof(struct node));
  newNode->data = e;
  if(l->head == NULL){newNode->next = NULL;}
  else {newNode->next = l->head;}
  l->head = newNode;

}

