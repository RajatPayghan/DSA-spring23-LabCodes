#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "element.h"
#include "stack.h"
// #include "functions.h"
// #include "nodedef.h"


int main()
{
  LIST l;
  NODE n1, n2, n3, n4, n5,n6;
  Element e1, e2, e3, e4,e5,e6;

  // Populate Elements
  e1.int_value = 1;
  e2.int_value = 2;
  e3.int_value = 3;
  e4.int_value = 4;
  e5.int_value = 5;
  e6.int_value = 6;

  //Create List
  l = createNewList();

  //Create Nodes
  n1 = createNewNode(e1);
  n2 = createNewNode(e2);
  n3 = createNewNode(e3);
  n4 = createNewNode(e4);
  n5 = createNewNode(e5);
  n6 = createNewNode(e6);

  // Insert Nodes into List
  insertNodeIntoList(n1,l);
  insertNodeIntoList(n2,l);
  insertNodeIntoList(n3,l);
  insertNodeIntoList(n4,l);
  insertNodeIntoList(n5,l);
  insertNodeIntoList(n6,l);

  //Operations
  printList(l);
  removeFirstNode(l);
  insertFirstElement(e5,l);
  printList(l);

  return 0;
}