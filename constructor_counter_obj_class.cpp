#include <iostream>
using namespace std;

class Counter
{
    private:
        int count;
    public:
        Counter(): count(0) //constructor
        {}
        void inc_count()
        {
            count++;
        }
        int getcount() //display
        {
            return count;
        }
};
int main()
{
    Counter c1,c2;

    cout <<"\nc1 = " << c1.getcount();
    cout <<"\nc2 = " <<c2.getcount();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout <<"\nc1 = " <<c1.getcount();
    cout <<"\nc2 = " <<c2.getcount();
}