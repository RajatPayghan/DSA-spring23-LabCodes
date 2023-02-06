#include<stdio.h>
#include<stdlib.h>
#include"core.h"

void assign_room_0(struct Hotel *hotel) {
    if (hotel->roomsOccupied < MAX_ROOMS) {
        for (int i = hotel->roomsOccupied - 1; i >= 0; i--) {
            hotel->occupants[i + 1] = hotel->occupants[i];
        }
        hotel->roomsOccupied++;
        hotel->occupants = (struct Room *) realloc(hotel->occupants, hotel->roomsOccupied * sizeof(struct occupant));
        printf("Enter the name of the visitor: ");
        scanf("%s", hotel->occupants[0].name);
        printf("Enter the age of the visitor: ");
        scanf("%d", &hotel->occupants[0].age);
        printf("Enter the address of the visitor: ");
        scanf("%s", hotel->occupants[0].address);
        printf("Assigned room number 0 to %s\n", hotel->occupants[0].name);
    } else {
        printf("All rooms are occupied.\n");
    }
}