#include <stdio.h>
#include "functions.h"

int main()
{
  // NODE n1 = createNode(3);
  // NODE n2 = createNode(5);
  // NODE n3 = createNode(8);
  // LIST l1 = createList();

  // appendNode(n1, l1);
  // appendNode(n2, l1);
  // appendNode(n3, l1);
  // printList(l1);

  NODE n[10];
  LIST l2 = createList();
  for (int i = 0; i < 10; i++)
  {
    n[i] = createNode(10*i);
    appendNode(n[i], l2);
  }
  

  printList(l2);

}


