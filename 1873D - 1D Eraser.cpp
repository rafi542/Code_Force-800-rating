#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, b, cnt=0, g, i, j, k, t;
  string s;
  cin >> t;
  while(t--){
   cin >> n >> k;
   cin >> s;
   cnt = 0;
   g = 0;
   int f = 0;
  for(i=0; i<n; i++)
  {
    if(g>0)
      i = i + g - 1;
    if(i >= n)  
      break;
    g = 0;
    j = 0; 
    if(s[i] == 'B'){
    while(g<k)
    {
        if(j==0){
         cnt++;
         j = 1;
        }
      g++;
    }
   }
  }
  cout << cnt << endl;
 }
}
