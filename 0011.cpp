#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main () 
{
    int n; cin >> n;
    long long sum = 0 , c;
    for (int i =0 ; i < n ; i++)
    {
        cin >> c;
        sum += (c-1);
    }
    cout << sum ;
      
    
}
