/*
 * 一维数组的 作为函数返回值
 * created at 2015-05-15
 */
#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom( )
{
  static int  r[10];
  int i;

  /* set the seed */
  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i)
  {
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);

  }

  return r;
}
int plus(int a, int b){
	int c = a;
	int d = b;
	return d - c;
}
/* main function to call above defined function */
int main ()
{
   /* a pointer to an int */
   int *p;
   int i;

   p = getRandom();
   printf("%d \n", plus(3, 4));
   for ( i = 0; i < 10; i++ )
   {
       printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
