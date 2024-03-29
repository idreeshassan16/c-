#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const double british_pound = 1.487;
    const double japanese_yen = 0.487;
    const double french_frenc = 0.584; 
    const double german_duch = 0.342;
    double dollar;

    cout << "Enter amount in dollar:" ;
    cin >> dollar;

    cout <<"pound" <<setw(10) << dollar/british_pound <<endl
        <<"Yen" <<setw(10) << dollar/japanese_yen << endl
        <<"Frenc" << setw(10) << dollar/french_frenc <<endl
        <<"Duch" <<setw(10) << dollar/german_duch <<endl;

    return 0;

}