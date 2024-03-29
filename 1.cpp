#include <iostream>
using namespace std;

int main()
{
    const double Gallon_in_foot = 7.481 ;
    double gallon , foot;

    cout <<" gallons are"<< endl ;
    cin >> gallon;

    foot = gallon/Gallon_in_foot;
    cout << gallon <<" gallon is " << foot <<" foot .";

    return 0; 
}