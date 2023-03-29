//This code contains instances of malloc, calloc and realloc

#include <stdio.h>
#include <stdlib.h>
const int NUMBER = 10;
const int NEW_NUMBER = 20;

int main() 
{
  float* p;
  p = malloc(NUMBER * sizeof(float));
  p = malloc(NUMBER * sizeof(float));
  if (p==NULL)
  {
    printf("Unable to allocate");
    return -1;
  }

  for (int i = 0; i < 10; i++){ p[i] = (float)i/10;}
  
  for (int i = 0; i < 10; i++){printf("%f - ",p[i]);}

  // New Inputs

  p = realloc(p , NEW_NUMBER * sizeof(float)); //

  for (int i = 10; i < 20; i++){*(p+i) = (float)i/10;}
  printf("\n");
  for (int i = 0; i < 20; i++){printf("%f\n",*(p+i));}

  free(p);
}
