#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
static int COUNT = 10;

// Program to generate fibonacci numbers

int main()
{
  struct timeval t2, t1;
  double time_taken;

  long long int num, lastSum=1, prelastsum=1;
  int start=1;
  lastSum = start;
  num = lastSum;

  printf("%lld-", lastSum);
  printf("%lld-", prelastsum);

  gettimeofday(&t1,NULL);
  for (int i = 0; i < COUNT-2; i++)
  {
    num = lastSum + prelastsum;
    printf("%lld-", num);
    prelastsum = lastSum;
    lastSum = num;
  }
  gettimeofday(&t2,NULL);

  time_taken = (t2.tv_sec - t1.tv_sec) * 1e6;
  time_taken = (time_taken + (t2.tv_usec - t1.tv_usec)) * 1e-6;

  // printf("Last Fibonnaci Number = %d\n", num);
  printf("End\n");
  printf("Time taken = %f \n", time_taken);
  
}