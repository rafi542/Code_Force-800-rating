#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, w, g, h, p, k, a, cnt=0, t, f, sum=0;
  cin >> k >> n >> w;
  for(i=1; i<=w; i++)
    sum += i * k;
  if(sum > n)  
  {
    sum -= n;
    cout << sum << endl; 
  }
  else
    cout << 0 << endl;
}  
