#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, n;
  cin >> t;
  while(t--)
  {
    cin >> n ;
    for(i=0; i<n; i++) 
    {
      if(i==0)
        cout << n << " ";
      else
        cout << i << " "; 
    }
    cout << endl;
  }
}
