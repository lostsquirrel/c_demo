# include <stdio.h>

void main() {
    int a = 5;
    unsigned int b = 3;
    short c = 5;
    int d = 0;
    a = ~a;
    b = ~b;
    c = ~c;

    d = a & b;
    d = a ^ b;
    d = a | b;
}

// gcc -g bit.c -o bit.out