#pragma once
class Number
{
private:
	int first;
	unsigned int second;
public:
	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }

	void SetFirst(int value);
	void SetSecond(unsigned int value);

	bool Init(int a, int b);
	void Display() const;
	void Read();
	void multiply(int c);
};
