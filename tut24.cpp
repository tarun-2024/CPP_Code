#include <iostream>
using namespace std;

class employee
{
    static int count;
    int eId;

public:
    void setData()
    {
        cout << "Enter the eId " << endl;
        cin >> eId;
        count++;
    }
    void getData()
    {
        cout << "The eId of this employee is " << eId << " and this is employee number " << count << endl;
    }
};

// Initialising of static data member
int employee ::count ; // Default value is 0.

int main()
{
    employee tarun, subodh, rajeev;
    tarun.setData();
    tarun.getData();

    subodh.setData();
    subodh.getData();

    rajeev.setData();
    rajeev.getData();

    return 0;
}