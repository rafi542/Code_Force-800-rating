#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, a, j, k, n, g, f=0, h, i;
  int x=1, y=1;
  int x1, y1;
  string ch;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> ch;
    x1 = 0;
    y1 = 0;
    f = 0;
    for(i=0; i<n; i++)
    {
      if(ch[i] == 'R')
        x1++;
      if(ch[i] == 'L')
        x1--;  
      if(ch[i] == 'U')
        y1++;  
      if(ch[i] == 'D')
        y1--;  
      if(x1==x && y1==y)  
      {
        f = 1;
        cout << "YES" << endl;
        break;
      }
    }
    if(f==1)
      continue;
    cout << "NO" << endl;   
  }
}
