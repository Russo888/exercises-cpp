#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void simmetrica(int m[][100], int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(m[i][j]!=m[j][i])
                a++;
        }
	}
	if(a==0)
        cout<<"la matrice generata è simmetrica";
    else
        cout<<"la matrice generata non è simmetrica";
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

int main()
{
    int n;
    srand ((unsigned) time(NULL));
    cout<<"Inserire lato quadrato: ";
    cin>>n;
    cout<<endl;

    int m[100][100]={65535};

    for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
		   m[i][j]=rand()%10;
		}
	}

    simmetrica(m,n);

    cout<<endl;
    visualizza(m,n);


    return 0;
}

