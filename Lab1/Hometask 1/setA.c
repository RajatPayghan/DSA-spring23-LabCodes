#include <stdio.h>
#include "set.h"

int answerChecker(char s[10])
{
  char A[10] = {'A','C','D','A','C','D','A','C','D','B'};
  int marks=0;
  for (int i = 0; i < 10; i++)
  {
   if (A[i]==s[i]){marks += 4;}
   else {marks--;}
   if (s[i]=='z'){marks++;}
  }
  if (marks<0)
  {
    marks = 0;
  }
  
  return marks;
}