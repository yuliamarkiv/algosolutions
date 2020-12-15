#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int  N, R ;
  float ans , b;
  cin >> N>> R;
  const float p = 3.14;
  ans = (R * R * p) / N ;
  b = sqrt(ans / p );
  

  cout << b << endl;
  
 return 0;
}
