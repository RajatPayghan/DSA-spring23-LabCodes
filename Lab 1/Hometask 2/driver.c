#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "core.h"

int main()
{
  int choice;
  HOTEL* h;
  h = (HOTEL*)malloc(1 * sizeof(HOTEL));
  strcpy(h->name, "The Grand Hotel");
  // strcpy(h.address, "A22, Viola Housing Society");
  h->roomsOccupied=0;
  h->occupants = (OCCUPANT*)calloc(0, sizeof(OCCUPANT));
  
  while (1)
  {
    printf("Mr. Hilbert, please choose one of the aforementioned options: \n");
    printf("1. Assign room to a new visitor. \n");
    printf("2. Assign room 0 to a new visitor. \n");
    printf("3. Display Occupant \n");
    printf("4. Display occupants of a room. \n");
    printf("5. Exit. \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
      assignRoom(h);
      printf("\n");
      break;
    case 2:
      // assignZeroRoom(h);
      break;
    case 3:
      displayOccupant(h);
      printf("\n");
      break;
    case 4:
      displayOccupantList(h);
      printf("\n");
      break;
    case 5:
      exit(1);
      break;
    default:
      break;
    }
  }



}