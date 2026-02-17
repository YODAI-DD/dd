#include "class1_class.h"
#include <iostream>
using namespace std;

int main()
{
	Student student[] =
	{
		{"高橋陽大", 73, 98, 86, },
		{"山口真子", 80, 99, 97, },
		{"ヒルマンニナ", 69, 88, 100, },
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i)
	{
		Show(&student[i]);
	}
}