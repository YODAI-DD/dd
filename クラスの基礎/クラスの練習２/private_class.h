#pragma once

class IntArray
{
private:
	static constexpr int INTARRAYSIZE = 100;
	int m_array[INTARRAYSIZE];

	void CheckIndex(int i);

public:
	IntArray();

	int Get(int i);
	void Set(int i, int value);
};