//练习4： 打印带表头的摄氏-华氏温度表
//时间： 2013-11-13 23：01

#include<stdio.h>
main() {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;
        fahr = lower;
        printf("Celsius\tFahr\n");
        while(celsius <= upper) {
               fahr  = 9 *  celsius / 5 + 32;
                printf("%3.0f\t%6.2f\n", celsius, fahr);
                celsius += step;
         }
}