#include <iostream>
using namespace std;
int main()
{
  int n;
  int m = 0;

  cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];

  }

  for (int i = 0; i < n; i++)
  {
    if (abs(a[i + 1] - a[i]) < 2)
    {
      m = 1;
    }
  }
  if (m == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
