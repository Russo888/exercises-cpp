#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void visua (int valori[])
{
    cout<<endl <<"i valori scambiati sono:"<<endl;
    for(int i=0;i<=20;i++)
    {
        cout<<valori[i] <<endl;
    }
}

void genera (int valori[])
{
    for(int i=1;i<=20;i++)
    {
       valori[i]=((rand()%100)+1);
    }
}

void scambia (int valori[], int scambiati[])
{
    int a=20;
    for(int i=1;i<=20;i++)
    {
        scambiati[a]=valori[i];
        a--;
    }

    a=0;

    for(int i=1;i<=20;i++)
    {
        a++;
        valori[i]=scambiati[a];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int valori[21]={0};
    int scambiati[21]={0};
	
    genera (valori);
    visua(valori);
    
    scambia (valori, scambiati);
    
    visua(valori);
    

    return 0;
}
