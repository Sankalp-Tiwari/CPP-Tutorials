#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your age\n";
    cin >> a;
    if (a > 18)
    {
        cout << "you are allowed\n";
    }
    else
    {
        cout << "You are not allowed\n";
    }
    return 0;
}