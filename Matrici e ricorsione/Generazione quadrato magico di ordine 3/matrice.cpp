#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void genera(int matrice[][3])
{


        do
        {
            do
            {
                do
                {
                    do
                    {
                        do
                        {
                            for(int i=0;i<=2;i++)
                            {
                                do
                                {
                                    for(int j=0;j<=2;j++)
                                    {
                                        matrice[i][j]=(rand()%9)+1;

                                    }
                                }
                                while(matrice[i][0]+matrice[i][1]+matrice[i][2]!=15);
                            }
                        }
                        while(matrice[0][0]+matrice[1][0]+matrice[2][0]!=15);
                    }
                    while(matrice[0][1]+matrice[1][1]+matrice[2][1]!=15);
                }
                while(matrice[0][2]+matrice[1][2]+matrice[2][2]!=15);
            }
            while(matrice[0][0]+matrice[1][1]+matrice[2][2]!=15);
        }
        while(matrice[2][0]+matrice[1][1]+matrice[0][2]!=15);

}

int main()
{
    srand((unsigned)time(NULL));

    int matrice[3][3]={0};


    genera(matrice);

    cout<<"la matrice generata e':"<<endl;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
    cout<<endl;
    }

    return 0;
}
