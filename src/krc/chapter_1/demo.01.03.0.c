#include <stdio.h>
/* print Fahrenheit-Celsius table */
void demo01030_0() {
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
/*

int main() {
	demo01030_0();
	return 0;
}
*/
