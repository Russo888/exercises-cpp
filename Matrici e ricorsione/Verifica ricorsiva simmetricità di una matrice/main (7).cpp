#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
void simmetrica(int m[][100],int i, int j, int n, int &a)
{
    if(i<=n)
    {

        if(m[i][j]==m[j][i])
            {
                a++;
            }
            j++;

        if(j==n)
            {
                i++;
                j=0;
            }
        simmetrica(m, i, j, n, a);
    }
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
    int a, i,j;
    srand ((unsigned) time(NULL));
    cout<<"Inserire lato quadrato: ";
    cin>>n;
    cout<<endl;

    int m[100][100]={65535};

    /*do
    {*/
        i=1;
        j=0;
        a=0;
        for(int x=1; x<=n; x++)
        {
            for(int z=1; z<=n; z++)
            {
               //m[x][z]=rand()%10;
               cout<<"inserire valore: "<<endl;
               cin>>m[x][z];
            }
        }

        simmetrica(m, i, j, n, a);

    /*}
    while(a!=n*n);*/

    if(a==n*n)
    {
        cout<<endl<<"la matrice generata e' simmetrica"<<endl;
        visualizza(m,n);
    }
    else
        cout<<"la matrice generata non e' simmetrica";

    return 0;
}

