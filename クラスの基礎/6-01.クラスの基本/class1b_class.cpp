#include "class1b_class.h"
#include <iostream>
using namespace std;

void Student::Show()
{
	cout << "名前 : " << name << endl;
	cout << " 国語 : " << scoreJapanese << " 点"
		<< ", 数学 : " << scoreMath << " 点"
		<< ", 英語 : " << scoreEnglish << " 点" << endl;
}