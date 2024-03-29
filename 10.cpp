#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int pound ,penny,shilling;

    cout <<"Enter pound : " <<endl;
    cin >>pound;
    cout <<"Enter shilling : " <<endl;
    cin >> shilling;
    cout << "Enter penny : " <<endl;
    cin >> penny;

    cout << 'J' << static_cast<double>(pound +(penny /12.0 + shilling)/20.0);
}