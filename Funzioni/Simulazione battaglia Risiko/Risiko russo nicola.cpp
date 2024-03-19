#include <iostream>
#include <ctime>

#include <stdlib.h>
using namespace std;


void vincitore (int &v1, int &v2, int &v3, int &v4, int &v5, int &v6, int &a, int &d)
{

    if((v1>v4)&(v1!=v4))
    {
        a++;
    }
    else
    {
    d++;
    }
    if((v2>v5)&(v2!=v5))
    {
        a++;
    }
    else
    {
    d++;
    }
    if((v3>v6)&(v3!=v6))
    {
        a++;
    }
    else
    {
    d++;
    }

}

int main()
{
srand((unsigned)time(NULL));
int v1;
int v2;
int v3;
int v4, v5, v6, d,a,c;
a=0;
d=0;
v1=(rand()%6)+1;
v2=(rand()%6)+1;
v3=(rand()%6)+1;
v4=(rand()%6)+1;
v5=(rand()%6)+1;
v6=(rand()%6)+1;

vincitore(v1,v2,v3,v4,v5,v6,a,d);

cout<<v1 <<" " << v4 <<endl;
cout<<v2 <<" " << v5 <<endl;
cout<<v3 <<" " << v6 <<endl;
cout<<"l'attacco ha perso: ";
c=3-a;
cout<<c <<" carri armati";



}
