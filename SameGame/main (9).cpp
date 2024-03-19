#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void scambia(int &a, int &b)
{
    int c=0;
    c=a;
    a=b;
    b=c;
}

void slittamento(int m[][101])
{
    int saba;
    do
    {
        saba=0;
        for(int i=2;i<=12;i++)
        {
            for(int j=1;j<=16;j++)
            {
                if(m[i][j]==0)
                {
                    scambia(m[i][j], m[i-1][j]);
                    saba++;
                }
            }
        }
    }
    while(saba>0);
}

void punteggio(int np, int &p)
{
    p=p+((np-1)*(np-1));
}

void vediseperde(int m[][101], int n, int &cont)
{
    int i=0;
    int j=0;
    for(int r=1;r<=16;r++)
    {
        for(int c=1; c<=12; c++)
        {
            if(m[r][c]!= 0)
            {

                i=r-1;
                j=c;
                if(m[i][j]==m[r][c])
                {
                    cont++;
                }

                i=i+2;
                if(m[i][j]==m[r][c])
                {
                    cont++;
                }

                i=r;
                j=c-1;
                if(m[i][j]==m[r][c])
                {
                    cont++;
                }

                j=j+2;
                if(m[i][j]==m[r][c])
                {
                    cont++;
                }
            }
        }
    }
}

void visualizza(int m[][101], int n, int p)
{
	cout<<endl;
	for(int i=0; i<=12; i++)
	{
		for(int j=0; j<=16; j++)
        {
            cout<<m[i][j];
            if(m[i][j]>9)  cout<<"  ";
            else    cout<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<"il tuo punteggio e': "<<p<<endl;}



void eliminablocchi(int m[][101], int r, int c, int &np)
{
    int appo=m[r][c];
    int i=0;
    int j=0;
    if((m[r][c]!=0)&&((m[r-1][c]==m[r][c])|(m[r+1][c]==m[r][c])|(m[r][c-1]==m[r][c])|(m[r][c+1]==m[r][c])))
    {
        np++;
        m[r][c]=0;
        i=r-1;
        j=c;
        if(m[i][j]==appo)
        {
            eliminablocchi(m, i, j, np);
        }

        i=i+2;
        if(m[i][j]==appo)
        {
            eliminablocchi(m, i, j, np);
        }

        i=r;
        j=c-1;
        if(m[i][j]==appo)
        {
            eliminablocchi(m, i, j, np);
        }

        j=j+2;
        if(m[i][j]==appo)
        {
            eliminablocchi(m, i, j, np);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int n, r, c, h=0, p=0;

    int m[101][101];

	for(int i=0; i<=100; i++)
	{
		for(int j=0; j<=100; j++)
        {
             m[i][j]= 10;
        }
	}

    for(int i=1; i<=12; i++)
        for(int j=1; j<=16; j++)
            m[i][j]=(rand()%5)+1;

    for(int i=0;i<=16;i++)
    {
        m[i][0]=h;
        m[0][i]=h;
        h++;
    }

    visualizza(m, n, p);

    int cont=0;
    int np=0;

    do
    {
        np=0;
        cont=0;
        cout<<"\nInserire numero riga: ";

        cin>>r;

        cout<<"Inserire numero colonna: ";

        cin>>c;

        eliminablocchi(m, r, c, np);
        punteggio(np, p);
     //   slittamento(m);
        visualizza(m, n, p);
        vediseperde(m, n, cont);
    }
    while(cont!=0);

    int somma=0;
    for(int i=1;i<=12;i++)
        for(int j=1;j<=16;i++)
            somma=somma+m[i][j];

    if(somma==0)
        cout<<" Hai vinto!";

    else
        cout<<"Hai perso, sei come marco.";




    return 0;

}
