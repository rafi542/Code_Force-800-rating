#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, g, n, cn;
  vector<int>v;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cn = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    if(v.size()==1)
    {
      cout << cn << endl;
      v.clear();
      continue;
    }
    for(i=0; i<n-1; i++)
    {
      if((v[i]%2 == 0 && v[i+1]%2 == 0) || (v[i]%2 != 0 && v[i+1]%2 != 0))
        cn++;
    }
    cout << cn << endl;
    v.clear();
  }
}
