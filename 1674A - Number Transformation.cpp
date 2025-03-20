#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n, m, a, b;
  cin >> t;
  while(t--)
  {
    cin >> n >> m;
    a = 0;
    b = 0;
    if(n > m)
    {
      cout << 0 << " " << 0 << endl;
      continue;
    }
    if(m % n == 0)
    {
      b = m / n;
      a++;
    }
    cout << a << " " << b << endl;
  }
}
