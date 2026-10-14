#include <iostream>

using namespace std;

#define MAX_OFLOW_TEST 10
#define MAX_OFLOW_PERMUTS 17576

#define MAX_OFLOW MAX_OFLOW_TEST

int main(int argn, char **args)
{
	unsigned int user_input;

	cin >> user_input;
	if(user_input >= MAX_OFLOW)
		exit(1);

	unsigned int tmp;
	for(unsigned int iterations=0; iterations < user_input; iterations++)
	{
		tmp = user_input*user_input;
		if(tmp >= MAX_OFLOW)
			tmp = tmp % MAX_OFLOW;
	}

	cout << tmp << endl;
	return tmp;
}

/*
Test sample with max = 10, input = 3:

1. 3*3 = 9, 9 < 10, cont.
2. 9*3 = 27, 27 > 10, 27%10 = 7
3. 7*3 = 21, 21 > 10, 21%10 = 1

return 1

*/
