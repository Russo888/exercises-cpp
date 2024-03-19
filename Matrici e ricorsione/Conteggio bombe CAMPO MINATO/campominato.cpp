#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void contabombe(int m[][100],int n)
{
    int appo=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(m[i][j]!=9)
			{
				for(int c=i-1;c<=i+1;c++)
				{
					for(int d=j-1;d<=j+1;d++)
					{
						if(m[c][d]==9)
						{
						  appo++;
						}
					}
				}
				m[i][j]=appo;
                appo=0;
			}
		}
	}
}

void bombe(int m[][100],int n,int numbombe)
{
	int a,b;
	for (int i=1;i<=numbombe;i++)
	{
		do
		{
			a=(rand()%n)+1;
			b=(rand()%n)+1;
		}
		while (m[a][b]==9);
		m[a][b]=9;
	}
}

void visualizza(int m[][100], int n)
{
	cout<<endl;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
           cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,diff,numbombe;
    int m[100][100];

    srand ((unsigned) time(NULL));
    cout<<"Inserire lato quadrato (5 - 40): ";
    cin>>n;
    cout<<"Inserire livello difficoltà (1 - 2 - 3): ";
    cin>>diff;
    if (diff==1)
       numbombe=n*n/8;
    if (diff==2)
       numbombe=n*n/6;
    if (diff==3)
       numbombe=n*n/4;
    bombe(m,n,numbombe);
    visualizza(m,n);
    contabombe(m,n);
    visualizza(m,n);
    return 0;
}
