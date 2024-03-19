#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void visualizza(int matrice[][200], int conta1, int conta2)
{
    for(int i=1;i<=conta1;i++)
    {
        for(int j=1;j<=conta2;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
}

void mediadi4(int matrice1[][200], int matrice2[][200], int &conta1, int &conta2)
{
    conta1=0;
    conta2=0;
    for(int i=1;i<=300;i=i+2)
    {
        conta1++;
        for(int j=1;j<=200;j=j+2)
        {
            conta2++;
            matrice2[conta1][conta2]=(matrice1[i][j]+matrice1[i][j+1]+matrice1[i+1][j]+matrice1[i+1][j+1])/4;
        }
        conta2=0;
    }
    conta1=150;
    conta2=100;
}

void genera(int matrice1[][200])
{
    for(int i=1;i<=300;i++)
    {
        for(int j=1;j<=200;j++)
        {
            matrice1[i][j]=(rand()%255);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrice1[300][200]={0};
    int matrice2[300][200]={0};
    int conta1=300, conta2=200;

    genera(matrice1);

    cout<<"la matrice generata e': "<<endl;
    visualizza( matrice1, conta1, conta2);

    mediadi4(matrice1, matrice2, conta1, conta2);
    cout<<"la seconda matrice e': "<<endl;
    visualizza( matrice2, conta1, conta2);
    return 0;
}
