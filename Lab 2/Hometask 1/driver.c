#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE* fp=NULL;
  char* word;
  char currChar;
  int count;
  int i;

  if ((fp = fopen("LOTR.txt","r")) == NULL) 
    {
      fprintf (stderr, "error: file open failed 'grades.txt'.\n");
      return 1;
    }

  while(currChar != EOF)
  {
    int i=0;
    while ((currChar = fgetc (fp)) != ' ' )
    {
      word[i]=currChar;
    }
    if(strcmp(word,"hobbit")) count++;
  }
  printf("The number of occurance of 'Hobbit' is %d", count);
  fclose(fp);
}

