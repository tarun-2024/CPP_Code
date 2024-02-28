#include <iostream>
using namespace std;

class party
{
private:
    int a;
    void getdata();

public:
    void access(){
        getdata();
    };
    void codition();
};

void party::getdata()
{
    cout << "Enter the value of a ";
    cin >> a;
}



void party::codition()
{
    // void getdata();
    if (a <= 0)
    {
        cout << "Not yet to born first of all born and wait 18 year then can you join the party";
    }

    else if (a < 18 && a > 0)
    {
        cout << "You are a child go to the child party";
    }
    else if (a >= 18 && a <= 40)
    {
        cout << "You can join the this(adult) party";
    }
    else if (a > 40)
    {
        cout << "You are young old man go and rest ";
    }
}

int main()
{
    party p1;
    p1.access();
    p1.codition();
    return 0;
}