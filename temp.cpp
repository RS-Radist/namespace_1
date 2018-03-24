
#include <iostream>
#include "temp.hpp"

namespace SALES1
{
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
        void showSales(SALES1::Sales& s)
        {
            std::cout<<"Accounting\n";
            std::cout<<"average = "<<s.average<<",max number = "<<s.max<<",min = "<<s.min<<std::endl;
            for (int i = 0;i < SALES1::size;++i)
            {
                std::cout<<s.sales[i]<<" | ";
            }
        }
    }
}
