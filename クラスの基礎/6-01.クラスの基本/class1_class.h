#pragma once
#include <iostream>
using namespace std;

const int MAX_NAME = 50;

//クラスの型を定義するにはメンバの宣言の前にpublicを指定する必要がある
class Student
{
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student* pointer);