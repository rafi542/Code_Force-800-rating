#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, k, t, cnt=0, cnt1=0;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    cnt = 0;
    cnt1 = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      if(g >= k)
        cnt += g;
      else if(g==0 && cnt !=0)  
      {
         cnt1++;
         cnt--;
      } 
    }
    cout << cnt1 << endl;
  }
}  
