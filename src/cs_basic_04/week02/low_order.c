# include <stdio.h>

void main() {
   float a = 5000000.0;
   float b = 0.1;
   float c = a + b;
   printf("%f + %f = %f\n", a, b, c);
   float d = c - a;
   printf("%f - %f = %f\n", c, a, d);
   float e = d - b;
   printf("%f - %f = %f\n", d, b, e);
   
}

// gcc -o low_order.out low_order.c && ./low_order.out