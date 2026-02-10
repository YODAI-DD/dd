#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student& stu)
{
	cout << "名前   : " << stu.name          << endl
		 << "  国語 : " << stu.scoreJapanese << " 点"
		 << ", 数学 : " << stu.scoreMath     << " 点"
		 << ", 英語 : " << stu.scoreEnglish  << " 点" << endl;
}

int main()
{
	Student student[] =
	{
		{ "山口真子" , 73, 98, 86, },
		{ "勝村摩耶" , 64, 45, 40, },
		{ "新井彩花" , 76, 78, 69, },
	};

	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; ++i)
	{
		Show(student[i]);
	}
}