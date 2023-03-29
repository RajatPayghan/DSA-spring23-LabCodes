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

// This function inserts a node at the beginning of the list.
void insertNodeIntoList(NODE node, LIST l)
{
  NODE newNode; // Creates a new node pointer
  newNode = (NODE)malloc(sizeof(struct node)); // Allocates a node to node pointer
  newNode->data = node->data; // Populates new node with old nodes data
  if(l->head == NULL){newNode->next = NULL;} // Checks for empty list
  else {newNode->next = l->head;} // Checks for Full list and adds second OG node into new node
  l->head = newNode; // Points list head to the new node
  l->count++;
  free(node); // Frees old node
}

//This Function prints the entire list
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
    printf("%d-",node_ptr->data.int_value); // Print the value of last node

    printf("\n");
  }
}

// This function removes the first node from the list.
void removeFirstNode(LIST list)
{
  NODE temp = list->head;
  list->head = temp->next;
  list->count--;
  free(temp);
}


