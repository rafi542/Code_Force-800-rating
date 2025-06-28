#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn, h, n, excn;
  long long int f, a, b, c, x;
  cin >> t;
  while(t--)
  {
    vector<long long int>v;
    cin >> n;
    cn = 1;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    sort(v.begin(),v.end());
    for(i=0; i<n-1; i++)
    {
      if(v[i] != v[i+1])
        cn++;
    }
    cout << cn << endl;
  }
}
    
