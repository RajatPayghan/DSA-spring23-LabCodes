#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE* fptr;
  int n;

  fptr = fopen("hellotext.txt", "w");
  printf("Enter Number");
  scanf("%d",&n);
  fprintf(fptr,"%d",n);  
  fclose(fptr);
  return 0;
}