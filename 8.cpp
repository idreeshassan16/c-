#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    long pop1 = 100000, pop2 = 3000, pop3 = 1000;

    cout << setfill('.') <<endl
        <<setw(9) << "City " << setw(12) <<" Population " <<endl
        <<setw(9) <<"Moscow " << setw(12) << " pop1 " <<endl
        <<setw(9) << "Kashmir " << setw(12) << " pop2 " <<endl
        <<setw(9) << "Brazil " << setw(12) << " pop3 " <<endl;

    return 0;
}