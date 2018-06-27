//练习3： 打印带表头的华氏-摄氏温度表
//时间： 2013-11-13 22：54

#include<stdio.h>
main() {
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;
        fahr = lower;
        printf("Fahr\tCelsius\n");
        while(fahr <= upper) {
                celsius = 5 * (fahr - 32) / 9;
                printf("%3d\t%6d\n", fahr, celsius);
                fahr += step;
         }
}