#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, j, k, n, g, cnt=0, h, sum;
  vector<int>v;
  cin >> t;
  while(t--)
  {
    cin >> n;
    sum = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    sort(v.begin(), v.end());
    for(i=1; i<n; i++)
    {
      v[i] = v[i] - v[0];
      sum = sum + v[i];
    }
    cout << sum << endl;
    v.clear();
  }
}
