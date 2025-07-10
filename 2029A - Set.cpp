#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn, h, l, r;
  long long int f, a, b, d, x, ar[950][950], e, add, close;
  int ans;
  char s;
  string c;
  cin >> t;
  while(t--)
  {
    cin >> l >> r >> k;
    g = 0;
    h = 0;
    g = l*k;
    if(g>r)
    {
      cout << 0 << endl;
      continue;
    }
    h = r - g;
    h /= k;
    h += 1;
    cout << h << endl;
  }
}
    
