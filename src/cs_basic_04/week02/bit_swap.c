# include <stdio.h>

void main() {
    int a = 3, b = 89;
    printf("before: a=%d, b=%d\n", a, b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("after: a=%d, b=%d\n", a, b);
}
// gcc -o swap.out bit_swap.c && ./swap.out