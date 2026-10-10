#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
    double subtotal, salesTax, total;
    subtotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subtotal * 0.06;
    total = subtotal + salesTax;
    cout<<fixed<<setprecision(2);
    cout<<"item 1 = $"<<item1<<endl;
    cout<<"item 2 = $"<<item2<<endl;
    cout<<"item 3 = $"<<item3<<endl;
    cout<<"item 4 = $"<<item4<<endl;
    cout<<"item 5 = $"<<item5<<endl;
    cout<<"subtotal = $"<<subtotal<<endl;
    cout<<"salesTax = $"<<salesTax<<endl;
    cout<<"total = $"<<total<<endl;
    return 0;
}
