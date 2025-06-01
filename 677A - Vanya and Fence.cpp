#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, sum=0, h, c, t;
  cin >> n >> h;
  for(i=0; i<n; i++)
  {
    cin >> g;
    if(g > h)
      sum += 2;
    else
      sum += 1;  
  }
  cout << sum << endl;
}  
