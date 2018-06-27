//练习5： 打印带表头的华氏-摄氏温度表从300到0(使用常量)
//时间： 2013-11-14 22:48

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
	printf("Fahr\tCelsius\n");
	float fahr;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		printf("%3.0f\t%6.2f\n", fahr, 5 * (fahr - 32) / 9 );
	}
}