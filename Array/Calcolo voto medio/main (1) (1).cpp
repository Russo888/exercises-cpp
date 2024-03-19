#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void calcolamedia (int voti[],int numerovoti,int valoremedia)
{
    int z=0;
    for(int i=1;i<=numerovoti;i++)
    {
        z=z+voti[i];
    }
    valoremedia=z/numerovoti;
    cout<<"la media dell'alunno e': "<<valoremedia<<endl;
}

void generavoti (int voti[])
{
    for(int i=1;i<=15;i++)
    {
       voti[i]=((rand()%50)+1);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int numeroalunni=0,alunno=0,numerovoti=0, media=0;

    cout<<"Quanti alunni ci sono in classe?"<<endl;
    cin>>numeroalunni;

    for(int i=0;i<=numeroalunni;i++)
    {
    cout<<"Di quale alunno vuoi la media?"<<endl;
    cin>>alunno;

    cout<<"Quanti voti ha l'alunno?"<<endl;
    cin>>numerovoti;

    int voti[numerovoti+1]={0};
    int alunni[numeroalunni+1]={0};

    for(int i=1;i<=numerovoti;i++)
    {

        cout<<"Quanle voto ha l'alunno?"<<endl;
        cin>>voti[i];
    }

    calcolamedia (voti, numerovoti, media);
    }

    return 0;
}
