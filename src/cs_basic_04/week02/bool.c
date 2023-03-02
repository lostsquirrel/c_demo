# include <stdio.h>

void main() {
    int a = 5;
    unsigned int b = 5;
    short c = 5;
    int d = 0;
     a = !a;
     b =!b;
     c =!c;
     d = a&&b;
     d = a||b;
}
// gcc -O0 -m32 -o bool.out -g bool.c
// objdump -d -S bool.out > bool.txt