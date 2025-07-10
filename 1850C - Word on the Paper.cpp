#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn, h, n, m;
  long long int f, a, b, d, x, ar[950][950], e, add, close;
  int ans;
  char s;
  string c;
  cin >> t;
  while(t--)
  {
    c = "";
    for(i=1; i<=8; i++)
    {
      for(j=1; j<=8; j++)
      {
        cin >> s;
        if(s != '.')
          c += s;
      }
    }
    cout << c << endl;
  }
}
    
