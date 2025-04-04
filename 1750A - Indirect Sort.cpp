#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, g, n, f, cn, j, h, m;
  vector<int>v;
  vector<int>p;
  cin >> t;
  while(t--)
  {
    cin >> n;
    m = n;
    cn = 0;
    f = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
      p.push_back(g);
    }
    sort(p.begin(),p.end());
    if(p[0]!=v[0])
    {
      cout << "No" << endl;
      v.clear();
      p.clear();
      continue;
    }
    for(i=0; i<n; i++)
    {
      if(p[i] != v[i])
        cn++;
    }
    if(cn==0)
    {
      cout << "Yes" << endl;
      v.clear();
      p.clear();
      continue;
    }
    h = m - cn;
    if(h < 0)
      h *= -1;
    for(i=m-1,j=h-1; i>0; i--,j--)
    {
      if(h == 0)
      {
        f = 1;
        break;
      }
      m *= i;
      if(j!=0)
        h *= j;
    }
    if(f==1)
      cout << "No" << endl;
    else
    {
      if(m % h == 0)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;  
    }
    v.clear();
    p.clear();
  }
}
