#include <stdio.h>
void say_hello(const char *str) {
	printf("Hello %s\n", str);
}

int main(void) {
	void (*f0)(const char *) = say_hello;
	f0("Guys");

	void (*f1)(const char *) = &say_hello;
	f1("Guys"); 
	(*f1)("Everyone");

	typedef int F(void);

	F f, g; /*声明函数*/
	F *fp; /*声明函数指针*/
	/*F h(void); */  /*‘h’ declared as function returning a function*/

	F *e(void);
	return 0;
}