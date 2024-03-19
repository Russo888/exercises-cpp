#include <iostream>
#include <ctime>

#include <stdlib.h>
using namespace std;
int ordina (int &a, int &b, int &c)
{
int m;
int n;
if((a<b)&(b<c))
{
    m=a;
    a=c;
    c=m;
    }
else
    {
        if((b>a)&(c>a)&(b>c))
        {
            m=b;
            b=c;
            c=a;
            a=m;
        }
        else
        {
            if((c>a)&(a>b))
            {
                m=c;
                c=b;
                b=a;
                a=m;
            }
            else
            {
                if((b>a)&(a>c))
                {
                    m=b;
                    b=a;
                    a=m;
                }
                else
                {
                    if((a>b)&(c>b))
                    {
                        m=b;
                        b=c;
                        c=m;
                    }
                    else
                    {
                        if((a>b)&(b>c))
                        {
                            a=a;
                            b=b;
                            c=c;
                        }
                    }
                }
            }
        }
    }
    return 0;
  }

int main()
{
    srand((unsigned)time(NULL));
    int a;
    int b;
    int c;
     while((a==b)&(b==c)&(a==c)|(a==b)&(b!=c)&(a!=c)|(a==c)&(c!=b)&(a!=b)|(a!=b)&(b==c)&(c!=a));
    {
        a=(rand()%6)+1;
        b=(rand()%6)+1;
        c=(rand()%6)+1;
    }

    cout<<"numeri casuali: " <<a <<"," <<b <<"," <<c <<"," <<endl;

    ordina(a,b,c);
    cout<<"numeri in ordine decrescente: "  <<a <<"," <<b <<"," <<c <<",";;


}
