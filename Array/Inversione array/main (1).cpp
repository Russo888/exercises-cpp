#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void visualizza (int valori[])
{
    cout<<endl <<"i valori invertiti sono:"<<endl;
    for(int i=0;i<=20;i++)
    {
        cout<<valori[i] <<", ";
    }
}

void genera (int valori[])
{
    for(int i=1;i<=20;i++)
    {
       valori[i]=((rand()%100)+1);
    }

    cout<<"i valori generati sono:"<<endl;
    for(int i=0;i<=20;i++)
    {
        cout<<valori[i] <<", ";
    }
    cout<<endl;
}

void scambia (int valori[], int invertiti[])
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
    int valori[21]={0};
    int invertiti[21]={0};

    genera (valori);
    scambia (valori, invertiti);


    return 0;
}
