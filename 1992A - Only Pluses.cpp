#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, a, b, c, cnt=0, t, f, pro;
  vector<int>v;
  cin >> t;
  while(t--)
  {
    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    cnt = 0;
    pro = 1;
    sort(v.begin(),v.end());
    for(i=0; i<v.size();)
    {
      if(cnt==5)
        break;
      if(v[i] <= v[i+1] && v[i] <= v[i+2])
      {
        cnt++;
        v[i] += 1;
      }
      else if(v[i+1] <= v[i] && v[i+1] <= v[i+2])
      {
        cnt++;
        v[i+1] += 1;
      }
      else
      {
        cnt++;
        v[i+2] += 1;
      }
    }
    for(i=0; i<v.size(); i++)
      pro *= v[i];
    cout << pro << endl;  
    v.clear();
  }
}  
