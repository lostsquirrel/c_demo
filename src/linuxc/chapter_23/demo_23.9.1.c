#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	struct s;
	union u;
	/*char str[]; *//*error: array size missing in ‘str’*/

	/*char str[];*/
	/*char str[10];*/  /*conflicting types for ‘str’*/

/* compile ok
	struct s {
		struct t *pt;
	};
	struct t {
		struct s *ps;
	};

	*/
/*
	struct s {
		struct t ot;  //field ‘ot’ has incomplete type
	};
	struct t {
		struct s os;
	};
	*/
	struct s {
		char data[6];
		struct s* next;
	};
	/*
	typedef void (*sighandler_t)(int);
	sighandler_t signal(int signum, sighandler_t handler);
	*/
	void (*signal(int signum, void (*handler)(int)))(int); // same as the last two
	
	return 0;
}