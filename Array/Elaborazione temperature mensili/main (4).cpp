#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void medie (double giorni[], double media[], int appo[])
{
    int saba=1;
    int somma=0;
    for(int z=1;z<=12;z++)
    {
        for(int i=saba;i<=appo[z];i++)
        {
            saba++;
            somma=somma+giorni[i];
        }
        media[z]=somma/(appo[z]-appo[z-1]);
        somma=0;
    }
}


void genera (double giorni[])
{
    int a;
    for(int i=1;i<=365;i++)
    {
        if(i>2)
            a=i-1;
        do
        {
            if((i>0)&(i<80))
                giorni[i]=((rand()%20)-10);

            else
            {
                if((i>80)&(i<173))
                    giorni[i]=((rand()%20)+10);

                else
                {
                    if((i>173)&(i<266))
                        giorni[i]=((rand()%20)+20);

                    else
                    {
                        if((i>266)&(i<357))
                            giorni[i]=((rand()%17)+10);

                        else
                        {
                            if(i>357)
                                giorni[i]=((rand()%20)-10);
                        }
                    }
                }
            }
        }
        while((giorni[i]-giorni[a])>5);
    }
}


void visua (double giorni[], double media[])
{
    for(int i=1;i<=365;i++)
    {
        cout <<i <<": "<<giorni[i] <<", "<<endl;
    }

        for(int i=1;i<=12;i++)
    {
        cout<<"La media del mese numero" <<i <<"è: " <<media[i] << endl;
    }
}

void appoggio(int appo[])
{
    appo[1]=31;
    appo[2]=59;
    appo[3]=90;
    appo[4]=120;
    appo[5]=151;
    appo[6]=181;
    appo[7]=212;
    appo[8]=243;
    appo[9]=273;
    appo[10]=304;
    appo[11]=334;
    appo[12]=365;
}

int main()
{
    srand((unsigned)time(NULL));

    double giorni[365]={0};
    double media[12]={0};
    int appo[12];

    appoggio (appo);
    genera (giorni);
    medie (giorni, media, appo);
    visua (giorni, media);
    return 0;
}

