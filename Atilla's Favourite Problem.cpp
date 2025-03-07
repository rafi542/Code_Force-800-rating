#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, j, k, n, g, cnt=0, R1, R2;
  string ch;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> ch;
    sort(ch.begin(), ch.end());
    cnt = 0;
    for(i=0; i<n; i++)
    {
      if(n==1){
      R1 = ch[i];
      g = R1;
      }
      else
      {
       R1 = ch[i];
       R2 = ch[i+1];
      
      if(R1>R2)
        g = R1;
      else
        g = R2;  
      }
    }
    for(j=97; j<=g; j++)
    {
      cnt++;
    }
    cout << cnt << endl;
  }
}
