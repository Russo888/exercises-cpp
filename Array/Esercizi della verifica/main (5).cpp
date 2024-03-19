#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void visualizza1 (int casuali[])
{
    cout<<endl <<"i valori generati sono:"<<endl;
    for(int i=0;i<=15;i++)
    {
        cout<<casuali[i] <<", ";
    }
    cout<<endl;
}

void visualizza2 (int pari[], int a)
{
    cout<<endl <<"i valori pari sono:"<<endl;
    for(int i=0;i<=a;i++)
    {
        cout<<pari[i] <<", ";
    }
    cout<<endl;
}

void visualizza3 (int posdispari[], int b)
{
    cout<<endl <<"i valori in posizione dispari sono:"<<endl;
    for(int i=0;i<=b;i++)
    {
        cout<<posdispari[i] <<", ";
    }
    cout<<endl;
}

void genera (int casuali[])
{
    for(int i=1;i<=15;i++)
    {
       casuali[i]=((rand()%50)+1);
    }
}

void numpari (int pari[])
{
    int a=21;
    for(int i=1;i<=20;i++)
    {
        a--;
        invertiti[a]=valori[i];
    }

    a=0;

    for(int i=1;i<=20;i++)
    {
        a++;
        valori[i]=invertiti[a];
    }
    visualizza(valori);
}

int main()
{
    srand((unsigned)time(NULL));
    int casuali[16]={0};
    int pari[16]={0};
    int duplicato[16]={0};
    int casuali[16]={0};
    int invertiti[21]={0};

    genera (valori);
    scambia (valori, invertiti);


    return 0;
}
