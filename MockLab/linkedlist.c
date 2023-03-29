#include "linkedlist.h"
#include <stdio.h>

static node *create_node_for_list(process p);
// Check header files for documentation/ function description
process_linked_list *create_empty_process_linked_list() 
{
  process_linked_list* pll;
  pll = malloc(sizeof(process_linked_list));
  pll->head=NULL;
  pll->size = 0;
  return pll;
}

bool add_first_to_linked_list(process_linked_list *list, process p) {
    return add_at_index_linked_list(list, 0, p);
}

bool add_last_to_linked_list(process_linked_list *list, process p) {
    return add_at_index_linked_list(list, list->size, p);
}

bool add_at_index_linked_list(process_linked_list *list, size_t index, process p) {
  node* n = create_node_for_list(p);
  node* temp = malloc(sizeof(node*));
  node* prevtemp = malloc(sizeof(node*));
  temp = list->head;

  if(list->head==NULL)list->head = n;
  else
  {
    int i=0; index--;
    while (temp->next != NULL && i<index)
    {
      temp=temp->next;
      i++;
    }

    if(temp->next==NULL)
    {
      temp->next = n;
      list->size++;
      return true;
    }
    n->next = temp->next;
    n->previous = temp;
    temp->next->previous = n;
    temp->next = n;
  }

  list->size++;
  return true;
}

bool remove_first_linked_list(process_linked_list *list, process *p) {
  if (list->size == 0) {
      return false;
  }
  else
  {
    node* temp = list->head;
    list->head = temp->next;
    temp->next->previous = list->head;
    free(temp);
    list->size--;
  }
}

bool remove_last_linked_list(process_linked_list *list, process *p) {
  if (list->size == 0) {
      return false;
  }
  node* temp=list->head;
  node* prevtemp=malloc(sizeof(node*));
  while (temp->next != NULL)
  {
    temp=temp->next;
  } 
  prevtemp=temp->previous;
  // prevtemp->next=NULL;
  free(temp);
  list->size--;
}

size_t get_size_linked_list(process_linked_list *list) {
    return list->size;
}

void print_linked_list(process_linked_list *list) {
    node *tracker = list->head;
    for (int i = 0; i < list->size; ++i) {
        printf("%d => ", tracker->process->pid);
        tracker = tracker->next;
    }
    printf("%s", "\n");
}

static node *create_node_for_list(process p) {
    process *to_add_process = malloc(sizeof(process));
    if (!to_add_process) {
        return NULL;
    }
    *to_add_process = p;
    node *new_node = malloc(sizeof(node));
    if (!new_node) {
        return NULL;
    }
    new_node->process = to_add_process;
    new_node->next = NULL;
    new_node->previous = NULL;
    return new_node;
}


void destroy_linked_list(process_linked_list *list) {
    node *current = list->head;
    for (int i = 0; i < list->size; ++i) {
        node *next = current->next;
        free(current->process);
        current = next;
    }
    free(list->head);
    free(list);
}




/*
 {
    index=index-2;
    for(int i=0; i<index;i++)
    {
      temp=temp->next;
    }

    n->next = temp->next;
    n->previous = temp;
    temp->next->previous = n;
    temp->next = n;
  }
*/