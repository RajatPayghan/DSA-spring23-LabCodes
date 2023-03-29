#include <stdio.h>
#include <stdlib.h>


int lengthNTR(char *str) 
{ 
  if (*str == '\0') { return 0; } 
  else { return 1 + lengthNTR(str + 1); } 
}

int lengthTR(char* str, int sum)
{
  if (*str == '\0') { return sum; } 
  else { return lengthTR(str + 1, sum + 1); } 
}


// Wrapper Class for Length Tail Recursive
int length(char* str){return lengthTR(str,0);}


int main()
{
  char* s;
  s = malloc(100*sizeof(char));
  printf("Enter the string :");
  scanf("%[^\n]",s);
  int len = length(s);
  printf("Length of strins is %d\n",len);
}