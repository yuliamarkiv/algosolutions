#include <iostream>
using namespace std;
int main ()
{
    int N;
    cin >> N;
   int  c = 0;
    while ( N != 0 )
    {
        
        if ( N >= 500)
        {
            N -= 500;
        }
            else if (N >= 200){
            N -=200;
            }
            else if (N >= 100)
            {
            N -=100;
        }
         else if (N >= 50)
        {
            N -=50;
        }
         else if (N >= 20)
        {
            N -=20;
        }
         else if (N >= 10)
        {
            N -=10;
        }
         else if (N >= 5)
        {
            N -=5;
        }
        else if (N >= 2)
        {
            N -=2;
        }
        else if (N >= 1)
        {
            N -=1;
            
        }
        c += 1;
       }
      cout << c;
}
