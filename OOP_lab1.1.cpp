#include <iostream>
#include "Number.h"

using namespace std;

Number makeNumber(int a, int b)
{
    Number m;
    if (!m.Init(a, b))
        cout << "wrong argument to Init (second)" << endl;
    return m;
}

int main()
{
    Number i;
    int a, b, N;
    cout << "first = ? "; cin >> a;
    cout << "second = ?"; cin >> b;
    cout << "multiplier = ?"; cin >> N;
    i = makeNumber(a, b);
    i.multiply(N);
    i.Display();

    return 0;
}