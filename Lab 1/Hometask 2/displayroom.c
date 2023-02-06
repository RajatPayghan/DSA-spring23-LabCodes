#include<stdio.h>
#include<stdlib.h>
#include"core.h"

void displayOccupantList(HOTEL* h1)
{
  // int n;
  FILE* fptr;
  fptr = fopen("occupants_list.txt", "w");
  // printf("Enter the room number :");
  // scanf("%d/n", &n);
  for (int n = 0; n < h1->roomsOccupied; n++)
  {
    fprintf(fptr,"Name : %s\n",h1->occupants[n].name);
    fprintf(fptr, "Age : %d\n",h1->occupants[n].age);
    fprintf(fptr, "Address : %s\n",h1->occupants[n].address);
    fprintf(fptr, "\n");
  }
  fclose(fptr);
}

void displayOccupant(HOTEL* h1)
{
  int n;
  printf("Enter the Room Number :");
  scanf("%d/n", &n);
  n--;
  printf("Name : %s\n",h1->occupants[n].name);
  printf("Age : %d\n",h1->occupants[n].age);
  printf("Address : %s\n",h1->occupants[n].address);
  printf("\n");
}