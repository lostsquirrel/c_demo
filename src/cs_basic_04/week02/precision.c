# include <stdio.h>

void main() {
   float t[10];
   float a = 123456789;
   int* pTem;
   int i;
   pTem = (int*)t;
   t[0]=61.419996;
   t[1]=61.419997;
   t[2]=61.419998;
   t[3]=61.419999;
   t[4]=61.420000;
   t[5]=61.420001;
   t[6]=61.420002;
   t[7]=61.420003;
   t[8]=61.420004;
   t[9]=61.420005;
   for (i=0;i<10;i++) {
    printf("%.6f, 0x%X\n", t[i], *(pTem+i));
   }
   printf("%f\n",a);
//    int x = 11010110111100110100011B;
}

// gcc -g -o precision.out precision.c && ./precision.out