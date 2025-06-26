#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a, b, t, i, j, k, g, cnt, c, h, n;
  cin >> t;
  while(t--)
  {
    cin >> n;
    if(n%2 == 0)
    {
      n /= 2;
      if(n != 0)
       n -= 1;
    }
    else
    {
      n /= 2;
    }
    cout << n << endl;
  }
}
    
