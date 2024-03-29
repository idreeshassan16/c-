#include <iostream>

using namespace std;

int main()
{
    double celsiustemp ;
    cout << "Enter the temperature in celsius:";
    cin >> celsiustemp;

    cout << celsiustemp << " in Fahrenheit system is "
        << celsiustemp/5*9 +32;

    return 0;
    
}