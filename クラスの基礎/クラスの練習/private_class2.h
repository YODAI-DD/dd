#pragma once

class IntArray
{
private:
	static constexpr int INTARRAYSIZE = 100;
	int m_array[INTARRAYSIZE];

	void CheckIndex(int i);

public:
	IntArray();
	void Set(int i, int value);
	int Get(int i);
};