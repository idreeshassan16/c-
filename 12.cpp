#include <iostream>

using namespace std;
int main()
{
    int pounds ;
    double decimalpenny;
    int shilling,penny;

    cout << "Enter amount of pounds in decimlpenny : "; cin >> pounds >> decimalpenny;

    shilling = static_cast<int>(decimalpenny * 20);
    penny = static_cast<int>(((decimalpenny * 20) - shilling) * 12);

    cout <<"Pounds : "<<pounds << "." << shilling << "." << penny << endl;
}