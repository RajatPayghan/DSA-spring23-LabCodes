#include <stdio.h>
#include <stdlib.h>
#include "set.h"

int main()
{
  int score;
  char sol[10];

  printf("Enter the answers to the set A with return key : \n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%c", &sol[i]);
  }
  printf("\n");
  score = answerChecker(sol);
  printf("Your Score Is : %d", score);  
  return 0;
}