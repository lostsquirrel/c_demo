#include <stdio.h>

int main(void) {
	int a;
	int x = 0, y = 0;
	do {
		scanf("%d", &a);
		if (a == -1) {
			break;
		}
		
		if (a % 2 ==  0) {
			y++;
		} else {
			x++;
		}
	} while (a != -1);
	
	printf("%d %d\n", x, y);
}