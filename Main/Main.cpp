#include <iostream>
#include"TPolish.h"

int main()
{
	char* s;
	s = "2+7";
	TPolish P;

	cout << P.Calculation(s);

	return 0;
}