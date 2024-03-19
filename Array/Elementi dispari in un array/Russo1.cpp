#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
  srand((unsigned)time(NULL));
  int isa[30];
  int cassano=0;
  for(int saba=1; saba<=30; saba++)
  {
      isa[saba]=(rand()%100)+1;
      cassano++;

        cout<<"numero " <<cassano <<": " <<isa[saba] <<endl;
  }
    cout<<endl;
  cout<<"numeri dispari:" <<endl;
    for(int saba=1; saba<=30; saba++)
    {
        if(isa[saba]%2!=0)
        cout<<isa[saba] <<", ";
    }
    return 0;
}

