#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE* fp=NULL;
  char s;
  fp=fopen(__FILE__,"r");
  
  s = getc(fp);
  while (s != EOF)
  {
    printf("%c",s);
    s = getc(fp);
  }
  
  printf(" \n");
  
  fclose(fp);
}