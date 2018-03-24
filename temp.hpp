#ifndef temp_hpp
#define temp_hpp

#include <stdio.h>

using namespace std;
namespace SALES1
{
    const int size = 4;
    struct Sales
    {
        double sales[size];
        double average;
        double max;
        double min;
    };
    namespace SET1
    {
        void setSales (Sales& s,const double ar[],int n);
        namespace SET2
        {
            void setSales(Sales& s);
        }
        void showSales(SALES1::Sales& s);
    }
}

#endif /* temp_hpp */
