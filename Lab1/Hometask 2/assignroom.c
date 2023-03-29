#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "core.h"

void assignRoom(HOTEL* h1)
{
  OCCUPANT tempOccupant;
  int roomNum = h1->roomsOccupied;
  printf("You have chosen to assign a room :\n");

  printf("Enter the name of the person:\n");
  scanf(" %[^\n]s", tempOccupant.name);
  printf("Enter the age of the person:\n");
  scanf("%d",&tempOccupant.age);
  printf("Enter the address of the person:\n");
  scanf(" %[^\n]s",tempOccupant.address);

  h1->roomsOccupied++;
  h1->occupants = realloc(h1->occupants,(h1->roomsOccupied)*sizeof(OCCUPANT));
  h1->occupants[roomNum] = tempOccupant;
  printf("Occupant added successfully!\n");
  printf("Rooms Occupied : %d\n", h1->roomsOccupied);


}

