// Example 3: Write a C++ program to understand public and private access of
// class data members.

#include <iostream>
using namespace std;

class myTest
{
private:
    int a, b, c;

public:
    void access_private()
    {
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c << endl;
    }
};

int main()
{
    myTest v;
    // You cannot directly access private members 'a', 'b', and 'c' here.
    // Instead, you use the public member function 'access_private' to set and display them.
    v.access_private(); // Public function to access private members
    return 0;
}
