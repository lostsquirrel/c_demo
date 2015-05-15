/*
 * 一维数组的 作为函数参数
 * created at 2015-05-15
 */
#include <stdio.h>

/* function declaration */
double getAverage(int arr[], int size);
double getAverage1(int *arr, int size);
double getAverage2(int arr[5], int size);

int main ()
{
   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   int balancex[10] = {1000, 0, 0, 0, 0, 0, 2, 3, 17, 50};
   printf( "Average value is: %f \n", getAverage(balance, 5) );
   printf( "Average value is: %f \n", getAverage(balancex, 10) );

   printf( "Average1 value is: %f \n", getAverage1(balance, 5) );
   printf( "Average1 value is: %f \n", getAverage1(balancex, 10) );

   printf( "Average2 value is: %f \n", getAverage2(balance, 5) );
   printf( "Average2 value is: %f \n", getAverage2(balancex, 10) );

   return 0;
}

double getAverage(int arr[], int size)
{
  int    i;
  double avg;
  double sum;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }

  avg = sum / size;

  return avg;
}

double getAverage1(int *arr, int size)
{
  int    i;
  double avg;
  double sum;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }

  avg = sum / size;

  return avg;
}

double getAverage2(int arr[5], int size)
{
  int    i;
  double avg;
  double sum;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }

  avg = sum / size;

  return avg;
}
