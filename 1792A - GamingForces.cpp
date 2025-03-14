#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n, i, j=0, k, g, h, f, cn1, f1;
  vector<int>v;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cn1 = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    for(i=0; i<n; i++)
    {
       f = 0;
      if(v[i] == 1)
      {
          for(j=0; j<n; j++)
         {
           if(v[j]==1 && i!=j)
           {
              v[j] = v[j] - 1;
              v[i] = v[i] - 1;
              cn1++;
              f = 1;
              break;
           }
         }
         if(f==0)
         {
           v[i] = v[i] - 1;
           cn1++;
         }
      }
      else if(v[i] == 2)
      {
        v[i] = 0;
        cn1++;
         for(j=0; j<n; j++)
         {
           if(v[j]==2)
           {
              v[j] = 0;
              cn1++;
              break;
           }
         }
      }
      else if(v[i] != 0)
      {
        v[i] = 0;
        cn1++;
      }
    }
    cout << cn1 << endl;
    v.clear();
  }
}
