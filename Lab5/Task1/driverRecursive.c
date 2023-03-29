#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
static int COUNT = 10;

int fibonacciRecursive(int count);

int main() 
{
  int i = fibonacciRecursive(COUNT);
  printf("%d\n", i);
}

int fibonacciRecursive(int count)
{
  if (count==1){return 1;}
  if (count==2){return 1;}
  return fibonacciRecursive(count - 1)+fibonacciRecursive(count-2);
}


