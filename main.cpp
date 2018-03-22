#include <iostream>
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
        void setSales (SALES1::Sales& s,const double ar[],int n)
        {
            int temp=0;
            if (n<=4)
            {
                s.max=ar[0];
                s.min=ar[0];
                for (int a=0;a<n;++a)
                {
                    temp+=ar[a];
                    s.average=temp/n;
                   
                    if (s.min>ar[a])
                    {
                        s.min=ar[a];
                    }
                    if (ar[a]>s.max)
                    {
                        s.max=ar[a];
                    }
                }
            }
        }
        namespace SET2
        {
            void setSales(Sales& s)
            {
                int temp=0;
                    s.max=s.sales[0];
                    s.min=s.sales[0];
                    for (int a=0;a<SALES1::size;++a)
                    {
                        temp+=s.sales[a];
                        s.average=temp/SALES1::size;
                        
                        if (s.min>s.sales[a])
                        {
                            s.min=s.sales[a];
                        }
                        if (s.sales[a]>s.max)
                        {
                            s.max=s.sales[a];
                        }
                    }
            }
        }
        void showSales(Sales& s,Sales& s1)
        {
            cout<<"One accounting\n";
            cout<<"average = "<<s.average<<",max number = "<<s.max<<",min = "<<s.min<<endl;
            for (int i = 0;i < SALES1::size;++i)
            {
                cout<<s.sales[i]<<" | ";
            }
            
            cout<<endl;
            cout<<"Second accounting\n";
            cout<<"average = "<<s1.average<<",max number = "<<s1.max<<",min = "<<s1.min<<endl;
            for (int i = 0;i < SALES1::size;++i)
            {
                cout<<s1.sales[i]<<" | ";
            }
        }
    }
}
int main()
{
    using namespace SALES1;
    using namespace SALES1::SET1;
    using namespace SALES1::SET1::SET2;
    Sales sales1;
    Sales sales2;
    for (int i=0;i<SALES1::size;++i)
    {
        sales1.sales[i]=rand()%10;
    }
    setSales(sales1, sales1.sales, 4);
    for (int i=0;i<SALES1::size;++i)
    {
        sales2.sales[i]=rand()%10;
    }
    setSales(sales2);
    showSales(sales1,sales2);
}
