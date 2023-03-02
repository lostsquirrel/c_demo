#include <stdio.h>

void main() {
  float sum = 0;
  for (int i = 0; i < 4000000; i++) {
    sum += 0.1;
  }
  printf("sum = %f\n", sum);
}
