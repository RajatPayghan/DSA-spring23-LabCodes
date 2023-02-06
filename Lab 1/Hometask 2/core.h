#include<stdio.h>
#include<stdlib.h>


typedef struct occupant
{
  char name[50];
  int age;
  char address[80];
}OCCUPANT;

typedef struct Hotel
{
  char name[20];
  char address[50];
  int roomsOccupied;
  OCCUPANT* occupants; 
}HOTEL;

void assignRoom(HOTEL* h);
void assignRoomAgain(HOTEL* h);
void printRoom(HOTEL h);
void assignZeroRoom(HOTEL h);
void emptyRoom(HOTEL h);
void displayOccupant(HOTEL* h);
void displayOccupantList(HOTEL* h);
