#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void visualizza (int uguali[], int &a)
{
    cout<<"ci sono " <<a <<" numeri uguali e sono: ";
    for(int i=a;i>=0;i--)
    {
        cout<<uguali[i] <<", ";
    }
}

void genera (int valori[])
{
    for(int i=1;i<=20;i++)
    {
       valori[i]=((rand()%100)+1);
    }
}

void controlla (int valori[], int &a, int uguali[])
{
    for(int i=1;i<=20;i++)
    {
       for(int j=i+1;j<=20;j++)
        {
            if(valori[i]==valori[j])
            {
                a++;
                uguali[a]=valori[i];
            }
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int a=0;
    int valori[21]={0};
    int uguali[21]={0};

    genera (valori);
    controlla (valori, a, uguali);
    visualizza (uguali, a);

    return 0;
}
