#include <stdio.h>

void main() {
  float sum = 0;
  float c = 0;
  float y, t;
  for (int i = 0; i < 4000000; i++) {
    y = 0.1 - c;
    t = sum + y;
    c = (t - sum) - y;
    sum = t;
  }
  printf("%f\n", sum);
}