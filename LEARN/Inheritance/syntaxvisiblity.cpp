#include <iostream>
using namespace std;
// base class//
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    employee(){};
};

// derived class//
//  7: note: candidate: constexpr employee::employee(employee&&) //

class proagrammer : public employee
{
public:
    proagrammer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
};

int main()
{

    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    proagrammer skillf(3);
    cout << skillf.languagecode << endl;

    return 0;
}