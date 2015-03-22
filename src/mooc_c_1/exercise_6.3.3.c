#include <stdio.h>

int main(void) {
	int m[][3] = {1,4,7,2,5,8,3,6,9,};
	int i,j,k=2;
	for (k = 0; k < 3; k++) {
		for ( i=0; i<3; i++ ) {
    			printf("%d", m[k][i]);
		}
	}
}
