#include <iostream>

using namespace std;

int ricercabinaria(int valori[], int n, int valoredacercare)
{
    int inizio, fine, centro;
    inizio=0;
    fine=n-1;

    while(inizio<=fine)
        {
            centro=(inizio+fine)/2;
            if(valori[centro]==valoredacercare)
                return centro;

            if(valori[centro]<valoredacercare)
                inizio=centro+1;

            else
                fine=centro-1;
        }
    return -1;
}

void ordina (int valori[])
{
    int min;
    int temp;
    for(int i=0; i<500-1; i++)
        {
        min = i;
        for(  int j=i+1; j<500; j++)
        {
            if(valori[j] < valori[min])
                min = j;
        }
        temp=valori[min];
        valori[min]=valori[i];
        valori[i]=temp;
        }
}

void genera (int valori[])
{
    for(int i=1;i<=500;i++)
    {
       valori[i]=((rand()%1000)+1);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int valori[501]={0};
    int n=500, valoredacercare;
    genera (valori);
    ordina (valori);

    for(int i=1; i<=500; i++)
    {
        cout<<valori[i] <<" ,";
    }
    cout<<endl;
    for(int i=1; i<4;i++)
    {
        cout<<endl <<"inserisci il " <<i <<"° valore da cercare" <<endl;
        cin>>valoredacercare;
        ricercabinaria(valori, n, valoredacercare);

        if(ricercabinaria(valori, n, valoredacercare)==-1)
        {
            cout<<"il valore non e' presente nell'array" <<endl;
        }
        else
        {
            cout<<"il valore e' presente nell'array";
        }
    }

    return 0;
}

