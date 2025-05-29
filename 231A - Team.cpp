#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long  int  i, j, k, g, h, p, v, a, cnt=0, t, f, ans;
  cin >> a;
  while(a--)
  {
    cin >> p >> v >> t;
    ans = p + v + t;
    if(ans >= 2)
      cnt++;
  }
  cout << cnt << endl;
}  
