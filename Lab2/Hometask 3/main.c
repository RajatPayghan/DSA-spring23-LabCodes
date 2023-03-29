#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE * file;
  char path[99999999999999];
  char word[100];

  char ch;
  int words=0;
  int count=0;

  fgets(path,sizeof path,stdin);

  file = fopen("LOTR.txt","r");
  while((ch = fgetc(file)) != EOF)
  {
    int i=0;
    while (ch != ' ' )
    {
      word[i]=ch;
    }
    if(strcmp(word,"hobbit")) count++;
  }
  printf("The number of occurance of 'Hobbit' is %d", count);
  fclose(file);
}