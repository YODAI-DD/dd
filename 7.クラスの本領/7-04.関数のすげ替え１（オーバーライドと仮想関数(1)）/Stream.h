#pragma once

class Stream
{
public:
	double Get() const;
	virtual bool Set();

public:
	double m_n;
};