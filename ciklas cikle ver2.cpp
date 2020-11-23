#include <iostream>
#include <iomanip>
using namespace std;
int main()
/*
0
0 1
0 1 2
0 1 2 3
.......
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8
..............
0 1
0*/

{

for(int i=0; i<=9;i++)
    {
      for(int j=0; j<=i;j++)
        {
           cout<<setw(2)<<j;
        }
        cout<<endl;
    }
for (int i=0; i<=9; i++)
    {
        cout<<setw(2)<<i;
    }
        cout<<endl;
for (int i=9; i>=0; i--)
    {
        for(int j=0;j<i;j++){

            cout<<setw(2)<<j;
        }
        cout<<endl;

    }

return 0;
}













