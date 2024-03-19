#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void allagamento(int m[][100],char a[][100],int n,int rig,int col)
{
	int contatore, appo =m[rig][col];
	a[rig][col]='*';
	do
	{
		for(int i=1;i<=n;i++)
		{
			contatore=0;
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='*')
				{
					appo=m[i][j];
					for(int x=i-1;x<=i+1;x++)
					{
						for(int z=j-1;z<=j+1;z++)
						{
							if(m[x][z]<=appo)
							{
								a[x][z]='*';
								contatore++;
							}
						}
					}
				}
			}
		}
		cout<<contatore;
	}
	while(contatore!=0);
}

void visualizza(int m[][100], int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
           cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
void visualizza(char m[][100], int n)
{
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
    int n,rig,col;
    srand ((unsigned) time(NULL));
    cout<<"Inserire lato quadrato:";
    cin>>n;

    int m[100][100]={65535};
    char a[100][100]={0};


    for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
		   m[i][j]=rand()%10;
		}
	}

	cout<<"Inserire coordinate sorgente (riga, colonna) ";
	cin>>rig;
	cin>>col;
	a[rig][col]='*';
	allagamento(m,a,n,rig,col);

    visualizza(m,n);

    cout<<endl;
    visualizza(a,n);


    return 0;
}

