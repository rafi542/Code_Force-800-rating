#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, b, cnt=0, g, i, j, k, t, sum=0;
  cin >> t;
  while(t--){
   cin >> n;
   sum = 0;
   k = 0;
   cnt = 0;
  for(i=0; i<n; i++)
  {
    cin >> g;
    if(g < 0 && k != 1)
    {
      cnt++;
      k = 1;
    }
    if(g>0){
     k = 0;
    }
    if(g<0) 
      g *= -1;
    sum += g;
  }
   cout << sum << " " << cnt << endl;
 }
}
