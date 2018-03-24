#include <iostream>
#include "temp.hpp"
using namespace std;
int main()
{
    SALES1::Sales sales1;
    SALES1::Sales sales2;
    for (int i=0;i<SALES1::size;++i)
    {
        sales1.sales[i]=rand()%10;
    }
    SALES1::SET1::setSales(sales1, sales1.sales, 4);
    for (int i=0;i<SALES1::size;++i)
    {
        sales2.sales[i]=rand()%10;
    }
    SALES1::SET1::SET2::setSales(sales2);
    SALES1::SET1::showSales(sales1);
    cout<<endl;
    SALES1::SET1::showSales(sales2);
}
