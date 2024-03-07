#include <iostream>
using namespace std;

class Part
{
    private:
        int modelnumber;
        int partnumber;
        float price;
    public:
        void setparts(int mn, int pn, float p)
        {
            modelnumber = mn;
            partnumber = pn;
            price = p;
        }
        void showdata()
        {
            cout <<"Model Number " <<modelnumber <<endl;
            cout <<"Part Number " << partnumber <<endl;
            cout << "Cost $ " <<price;
        }

};
int main()
{
    Part part1;

    part1.setparts(3421,234,2300000);
    part1.showdata();
    return 0;
    
}