#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, a, g, k, t, b, cnt=1, sum=0, f=0, gr=0;
  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    if(f==0){
     sum += a + b;
     gr = sum;
    } 
    else{
     sum -= a;
     sum += b;
    } 
    if(sum > gr)
      gr = sum;
    f = 1;  
  }
  cout << gr << endl;  
}  
