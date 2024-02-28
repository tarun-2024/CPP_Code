#include <iostream>
using namespace std;

class abc
{
    int a;
    int b;
    void large();

public:
    void getab();
    void putab();
    // void large();
};
void abc::large()
{
    if (a > b)
        cout << a;
    else
        cout << b;
}

void abc::getab()
{
    cout << "Enter the value of a and b " << endl;
    cin >> a >> b;
}

void abc::putab()
{
    cout << "The value of a and b are " << endl;
    cout << a << endl
         << b << endl;
    cout << "The largest value of a and b is" << endl;
    large();
}

int main()
{
    abc s;
    s.getab();
    s.putab();
    return 0;
}