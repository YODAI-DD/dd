#include "class1_class.h"
#include <iostream>
using namespace std;

void Show(const Student* pointer)
{
	cout << "名前 : " << pointer->name << endl
		<< "国語 : " << pointer->scoreJapanese << " 点"
		<< ", 数学 : " << pointer->scoreMath << " 点"
		<< ", 英語 : " << pointer->scoreEnglish << " 点" << endl;
}
