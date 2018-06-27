//练习5： 打印带表头的华氏-摄氏温度表从300到0
//时间： 2013-11-13 23:20

#include<stdio.h>
main() {
	printf("Fahr\tCelsius\n");
	float fahr;
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3.0f\t%6.2f\n", fahr, 5 * (fahr - 32) / 9 );
	}
}