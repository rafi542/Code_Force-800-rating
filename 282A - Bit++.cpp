#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long  int  i, j, k, g, h, p, v, a, cnt=0, t, f, ans;
  string c;
  cin >> a;
  while(a--)
  {
    cin >> c;
    if(c=="++X" || c=="X++")
      cnt++;
    else
      cnt--; 
  }
  cout << cnt << endl;
}  
