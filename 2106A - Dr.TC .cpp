#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn1, h, n, excn;
  long long int f, l2, l3, b1, b2, b3, sum1;
  string b;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> b;
    cn1 = 0;
    excn = 0;
    for(i=0; i<n; i++)
    {
      if(b[i]=='1')
        cn1++;
    }
    for(i=0; i<n; i++)
    {
      if(b[i]=='1')
        excn += cn1 - 1;
      else
        excn += cn1 + 1;  
    }
    cout << excn << endl;
  }
}
    
