#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void somma2(int matrice[][4], int &sommasecondaria)
{
    int j=3;
    for(int i=0;i<=3;i++)
    {
        sommasecondaria=sommasecondaria+matrice[i][j];
        j--;
    }
}

void somma1(int matrice[][4], int &sommaprincipale)
{
    for(int i=0;i<=3;i++)
    {
        sommaprincipale=sommaprincipale+matrice[i][i];
    }
}

void genera(int matrice[][4])
{
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            matrice[i][j]=(rand()%10)+1;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrice[4][4]={0};
    int sommaprincipale=0;
    int sommasecondaria=0;

    genera(matrice);

    cout<<"la matrice generata e':"<<endl;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
    cout<<endl;
    }

    somma1(matrice, sommaprincipale);
    somma2(matrice, sommasecondaria);

    cout<<"la somma dei valori della diagonale principale e'"<<sommaprincipale<<endl;
    cout<<"la somma dei valori della diagonale secondaria e'"<<sommasecondaria;

    return 0;
}
