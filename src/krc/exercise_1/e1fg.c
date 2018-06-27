//练习5： 查看getchar() != EOF 的结果是0还是1, 查看EOF的值
//时间： 2013-11-14 22:48

#include <stdio.h>
main()
{
	printf("EOF: %d\n", EOF);
	printf("getchar() != EOF :%d\n", getchar() != EOF);
}