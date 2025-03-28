#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, g, n, sum, f, c;
  vector<int>v;
  cin >> t;
  while(t--)
  {
    cin >> n;
    sum = 0;
    f = 0;
    c = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    for(i=0; i<n-1; i++)
    {
      if(f == 1)
        continue;
      if(v[i] == -1 && v[i+1] == -1)
      {
         v[i] *= -1;
         v[i+1] *= -1;
         f = 1;
         c++;
      }
      else if(i == n-2)
      {
        if(v[i] == -1 && v[i+1] == 1 || v[i] == 1 && v[i+1] == -1)
        {
          v[i] *= -1;
          v[i+1] *= -1;
          c++;
        }
      }
      else if(v[i] == -1 && v[i+1] == 1 || v[i] == 1 && v[i+1] == -1)
        c++;
    }
    if(c == 0)
    {
      v[n-1] *= -1;
      v[n-2] *= -1;
    }
    for(i=0; i<n; i++)
    {
      sum += v[i];
    }
    cout << sum << endl;
    v.clear();
  }
}
