extern int a;  // Extern1.cppのaを参照
void Func();   // Extern1.cppのFuncを参照

int main()
{
	Func();
	a = 5;
	Func();
}