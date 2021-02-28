#include "Number.h"
#include <iostream>

using namespace std;

void Number::SetFirst(int value)
{
    first = value;
}

void Number::SetSecond(unsigned int value)
{
    second = value;
}

bool Number::Init(int a, int b)
{
    first = a;
    if (b >= 0)
    {
        second = b;
        return true;
    }
    else
    {
        second = 0;
        return false;
    }
}

void Number::Display() const
{
    cout << " first = " << first << " second = " << second << endl;
}

void Number::Read()
{
    int a, b;
    cout << "first = ? ";
    cin >> a;
    do {
        cout << "second = ?";
        cin >> b;
    } while (!Init(a, b));
}

void Number::multiply(int N)
{
    first *= N;
    second *= N;
}
