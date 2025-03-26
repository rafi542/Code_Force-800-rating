#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, e, a, b, a1, b1, d;
  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    a1 = 1;
    b1 = 2;
    if(a!=0)
    {
      a *= a1;
    }
    if(b!=0)
    {
      if(a==0)
      {
        cout << 1 << endl;
        continue;
      }
      b *= b1;
    }
    d = a + b + 1;
    cout << d << endl;
  }
}
